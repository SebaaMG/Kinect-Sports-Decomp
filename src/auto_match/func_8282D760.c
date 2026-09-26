typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82822E38();
extern int fn_82823058();
extern int fn_82823080();
extern int fn_828230A8();


void fn_8282D760(undefined8 param_1,undefined8 param_2,code *param_3)

{
  int aiStack_30 [12];
  
  do {
    fn_82823080(param_2,aiStack_30);
    if (aiStack_30[0] == 0) {
      fn_828230A8(param_2,aiStack_30);
      if (aiStack_30[0] == 0) {
        fn_82823058(param_2,aiStack_30);
        if (aiStack_30[0] == 0) {
          return;
        }
      }
    }
    fn_82822E38();
    (*param_3)(param_1,aiStack_30[0]);
  } while( true );
}

