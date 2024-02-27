function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Task1"};
	this.sidHashMap["Task1"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Task1:27"};
	this.sidHashMap["Task1:27"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "Task1:33"};
	this.sidHashMap["Task1:33"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/For Iterator Subsystem"] = {sid: "Task1:27"};
	this.sidHashMap["Task1:27"] = {rtwname: "<Root>/For Iterator Subsystem"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "Task1:34"};
	this.sidHashMap["Task1:34"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<S1>/Input"] = {sid: "Task1:28"};
	this.sidHashMap["Task1:28"] = {rtwname: "<S1>/Input"};
	this.rtwnameHashMap["<S1>/For Iterator"] = {sid: "Task1:29"};
	this.sidHashMap["Task1:29"] = {rtwname: "<S1>/For Iterator"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "Task1:31"};
	this.sidHashMap["Task1:31"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "Task1:32"};
	this.sidHashMap["Task1:32"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "Task1:30"};
	this.sidHashMap["Task1:30"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
