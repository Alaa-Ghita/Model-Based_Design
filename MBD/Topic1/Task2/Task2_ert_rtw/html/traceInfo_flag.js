function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Task2.c:38"]=1;
    this.lineTraceFlag["Task2.c:43"]=1;
    this.lineTraceFlag["Task2.c:48"]=1;
    this.lineTraceFlag["Task2.c:53"]=1;
    this.lineTraceFlag["Task2.c:69"]=1;
    this.lineTraceFlag["Task2.h:38"]=1;
    this.lineTraceFlag["Task2.h:43"]=1;
    this.lineTraceFlag["Task2.h:48"]=1;
    this.lineTraceFlag["Task2.h:49"]=1;
    this.lineTraceFlag["Task2.h:50"]=1;
    this.lineTraceFlag["Task2.h:51"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
