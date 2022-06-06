"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports.getAuthToken = void 0;

var _reactNative = require("react-native");

const {
  SberId
} = _reactNative.NativeModules;

const getAuthToken = async options => {
  const result = await SberId.getAuthToken(options);
  return result;
};

exports.getAuthToken = getAuthToken;
//# sourceMappingURL=index.js.map