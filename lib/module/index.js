import { NativeModules } from 'react-native';
const {
  SberId
} = NativeModules;

const getAuthToken = async options => {
  const result = await SberId.getAuthToken(options);
  return result;
};

export { getAuthToken };
//# sourceMappingURL=index.js.map