function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Task5"};
	this.sidHashMap["Task5"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Task5:17"};
	this.sidHashMap["Task5:17"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Task5:5"};
	this.sidHashMap["Task5:5"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "Task5:12"};
	this.sidHashMap["Task5:12"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "Task5:21"};
	this.sidHashMap["Task5:21"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "Task5:17"};
	this.sidHashMap["Task5:17"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "Task5:22"};
	this.sidHashMap["Task5:22"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<Root>/Output1"] = {sid: "Task5:23"};
	this.sidHashMap["Task5:23"] = {rtwname: "<Root>/Output1"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "Task5:18"};
	this.sidHashMap["Task5:18"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "Task5:3"};
	this.sidHashMap["Task5:3"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/If"] = {sid: "Task5:1"};
	this.sidHashMap["Task5:1"] = {rtwname: "<S1>/If"};
	this.rtwnameHashMap["<S1>/If Action Subsystem"] = {sid: "Task5:5"};
	this.sidHashMap["Task5:5"] = {rtwname: "<S1>/If Action Subsystem"};
	this.rtwnameHashMap["<S1>/If Action Subsystem1"] = {sid: "Task5:12"};
	this.sidHashMap["Task5:12"] = {rtwname: "<S1>/If Action Subsystem1"};
	this.rtwnameHashMap["<S1>/Mod"] = {sid: "Task5:2"};
	this.sidHashMap["Task5:2"] = {rtwname: "<S1>/Mod"};
	this.rtwnameHashMap["<S1>/String Constant"] = {sid: "Task5:9"};
	this.sidHashMap["Task5:9"] = {rtwname: "<S1>/String Constant"};
	this.rtwnameHashMap["<S1>/String Constant1"] = {sid: "Task5:16"};
	this.sidHashMap["Task5:16"] = {rtwname: "<S1>/String Constant1"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "Task5:19"};
	this.sidHashMap["Task5:19"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S1>/Out2"] = {sid: "Task5:20"};
	this.sidHashMap["Task5:20"] = {rtwname: "<S1>/Out2"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "Task5:6"};
	this.sidHashMap["Task5:6"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Action Port"] = {sid: "Task5:7"};
	this.sidHashMap["Task5:7"] = {rtwname: "<S2>/Action Port"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "Task5:8"};
	this.sidHashMap["Task5:8"] = {rtwname: "<S2>/Out1"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "Task5:13"};
	this.sidHashMap["Task5:13"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Action Port"] = {sid: "Task5:14"};
	this.sidHashMap["Task5:14"] = {rtwname: "<S3>/Action Port"};
	this.rtwnameHashMap["<S3>/Out1"] = {sid: "Task5:15"};
	this.sidHashMap["Task5:15"] = {rtwname: "<S3>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
