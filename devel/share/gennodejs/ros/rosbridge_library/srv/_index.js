
"use strict";

let AddTwoInts = require('./AddTwoInts.js')
let TestNestedService = require('./TestNestedService.js')
let TestEmpty = require('./TestEmpty.js')
let TestMultipleResponseFields = require('./TestMultipleResponseFields.js')
let TestArrayRequest = require('./TestArrayRequest.js')
let TestRequestOnly = require('./TestRequestOnly.js')
let TestRequestAndResponse = require('./TestRequestAndResponse.js')
let TestResponseOnly = require('./TestResponseOnly.js')
let SendBytes = require('./SendBytes.js')
let TestMultipleRequestFields = require('./TestMultipleRequestFields.js')

module.exports = {
  AddTwoInts: AddTwoInts,
  TestNestedService: TestNestedService,
  TestEmpty: TestEmpty,
  TestMultipleResponseFields: TestMultipleResponseFields,
  TestArrayRequest: TestArrayRequest,
  TestRequestOnly: TestRequestOnly,
  TestRequestAndResponse: TestRequestAndResponse,
  TestResponseOnly: TestResponseOnly,
  SendBytes: SendBytes,
  TestMultipleRequestFields: TestMultipleRequestFields,
};
