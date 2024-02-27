function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Task3"};
	this.sidHashMap["Task3"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "Task3:33"};
	this.sidHashMap["Task3:33"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Input1"] = {sid: "Task3:34"};
	this.sidHashMap["Task3:34"] = {rtwname: "<Root>/Input1"};
	this.rtwnameHashMap["<Root>/Bitwise Operator"] = {sid: "Task3:27"};
	this.sidHashMap["Task3:27"] = {rtwname: "<Root>/Bitwise Operator"};
	this.rtwnameHashMap["<Root>/Bitwise Operator1"] = {sid: "Task3:28"};
	this.sidHashMap["Task3:28"] = {rtwname: "<Root>/Bitwise Operator1"};
	this.rtwnameHashMap["<Root>/Bitwise Operator2"] = {sid: "Task3:29"};
	this.sidHashMap["Task3:29"] = {rtwname: "<Root>/Bitwise Operator2"};
	this.rtwnameHashMap["<Root>/Bitwise Operator3"] = {sid: "Task3:30"};
	this.sidHashMap["Task3:30"] = {rtwname: "<Root>/Bitwise Operator3"};
	this.rtwnameHashMap["<Root>/Bitwise Operator4"] = {sid: "Task3:32"};
	this.sidHashMap["Task3:32"] = {rtwname: "<Root>/Bitwise Operator4"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "Task3:35"};
	this.sidHashMap["Task3:35"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<Root>/Output1"] = {sid: "Task3:36"};
	this.sidHashMap["Task3:36"] = {rtwname: "<Root>/Output1"};
	this.rtwnameHashMap["<Root>/Output2"] = {sid: "Task3:37"};
	this.sidHashMap["Task3:37"] = {rtwname: "<Root>/Output2"};
	this.rtwnameHashMap["<Root>/Output3"] = {sid: "Task3:38"};
	this.sidHashMap["Task3:38"] = {rtwname: "<Root>/Output3"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
