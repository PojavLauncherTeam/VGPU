#import <Foundation/Foundation.h>
#include "android/log.h"

#define PRIO_CASE(CASE, PREFIX) \
  case ANDROID_LOG_##CASE: \
    prioStr = #PREFIX; break;

int __android_log_vprint(int prio, const char *tag, const char *fmt, va_list ap) {
    char *prioStr;
    switch (prio) {
        PRIO_CASE(UNKNOWN, U)
        PRIO_CASE(VERBOSE, V)
        PRIO_CASE(DEBUG, D)
        PRIO_CASE(INFO, I)
        PRIO_CASE(WARN, W)
        PRIO_CASE(ERROR, E)
        PRIO_CASE(FATAL, F)
        PRIO_CASE(SILENT, S)
    }

    NSLog(@"%s/%s: %@", prioStr, tag, [[NSString alloc] initWithFormat:[NSString stringWithUTF8String:fmt] arguments:ap]);

    return 0; // stub
}

int __android_log_print(int prio, const char *tag,  const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    int i = __android_log_vprint(prio, tag, fmt, args);
    va_end(args);

    return i;
}
