function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Task2"};
	this.sidHashMap["Task2"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "Task2:11"};
	this.sidHashMap["Task2:11"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Mean"] = {sid: "Task2:5"};
	this.sidHashMap["Task2:5"] = {rtwname: "<Root>/Mean"};
	this.rtwnameHashMap["<Root>/MinMax"] = {sid: "Task2:2"};
	this.sidHashMap["Task2:2"] = {rtwname: "<Root>/MinMax"};
	this.rtwnameHashMap["<Root>/MinMax1"] = {sid: "Task2:4"};
	this.sidHashMap["Task2:4"] = {rtwname: "<Root>/MinMax1"};
	this.rtwnameHashMap["<Root>/Sum of Elements"] = {sid: "Task2:3"};
	this.sidHashMap["Task2:3"] = {rtwname: "<Root>/Sum of Elements"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "Task2:12"};
	this.sidHashMap["Task2:12"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<Root>/Output1"] = {sid: "Task2:13"};
	this.sidHashMap["Task2:13"] = {rtwname: "<Root>/Output1"};
	this.rtwnameHashMap["<Root>/Output2"] = {sid: "Task2:14"};
	this.sidHashMap["Task2:14"] = {rtwname: "<Root>/Output2"};
	this.rtwnameHashMap["<Root>/Output3"] = {sid: "Task2:15"};
	this.sidHashMap["Task2:15"] = {rtwname: "<Root>/Output3"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
