function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Task1.c:43c21"]=1;
    this.traceFlag["Task1.c:45c28"]=1;
    this.traceFlag["Task1.c:50c29"]=1;
    this.traceFlag["Task1.c:50c44"]=1;
    this.traceFlag["Task1.c:55c30"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Task1.c:42"]=1;
    this.lineTraceFlag["Task1.c:43"]=1;
    this.lineTraceFlag["Task1.c:44"]=1;
    this.lineTraceFlag["Task1.c:45"]=1;
    this.lineTraceFlag["Task1.c:46"]=1;
    this.lineTraceFlag["Task1.c:50"]=1;
    this.lineTraceFlag["Task1.c:55"]=1;
    this.lineTraceFlag["Task1.c:60"]=1;
    this.lineTraceFlag["Task1.c:79"]=1;
    this.lineTraceFlag["Task1.c:86"]=1;
    this.lineTraceFlag["Task1.h:38"]=1;
    this.lineTraceFlag["Task1.h:43"]=1;
    this.lineTraceFlag["Task1.h:48"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
