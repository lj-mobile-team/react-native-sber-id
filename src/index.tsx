import { NativeModules } from 'react-native';

const { SberId } = NativeModules;

type Options = {
  clientId: string;
  redirectUri: string;
  scope: string;
};

type Response = {
  code: string;
  state: string;
  nonce: string;
  codeVerifier: string;
};

const getAuthToken = async (options: Options): Promise<Response> => {
  const result = await SberId.getAuthToken(options);

  return result;
};

export { getAuthToken };
