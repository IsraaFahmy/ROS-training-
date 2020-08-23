// Auto-generated. Do not edit!

// (in-package myPkg.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class wordcountRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.mywords = null;
    }
    else {
      if (initObj.hasOwnProperty('mywords')) {
        this.mywords = initObj.mywords
      }
      else {
        this.mywords = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type wordcountRequest
    // Serialize message field [mywords]
    bufferOffset = _serializer.string(obj.mywords, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type wordcountRequest
    let len;
    let data = new wordcountRequest(null);
    // Deserialize message field [mywords]
    data.mywords = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.mywords.length;
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'myPkg/wordcountRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '536f99f60f14735a61b512ce326b9c73';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string mywords 
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new wordcountRequest(null);
    if (msg.mywords !== undefined) {
      resolved.mywords = msg.mywords;
    }
    else {
      resolved.mywords = ''
    }

    return resolved;
    }
};

class wordcountResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.count = null;
    }
    else {
      if (initObj.hasOwnProperty('count')) {
        this.count = initObj.count
      }
      else {
        this.count = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type wordcountResponse
    // Serialize message field [count]
    bufferOffset = _serializer.int32(obj.count, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type wordcountResponse
    let len;
    let data = new wordcountResponse(null);
    // Deserialize message field [count]
    data.count = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'myPkg/wordcountResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '602d642babe509c7c59f497c23e716a9';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    int32 count
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new wordcountResponse(null);
    if (msg.count !== undefined) {
      resolved.count = msg.count;
    }
    else {
      resolved.count = 0
    }

    return resolved;
    }
};

module.exports = {
  Request: wordcountRequest,
  Response: wordcountResponse,
  md5sum() { return 'fcbde222c0a68b4a1d0b96c95b82d17a'; },
  datatype() { return 'myPkg/wordcount'; }
};
