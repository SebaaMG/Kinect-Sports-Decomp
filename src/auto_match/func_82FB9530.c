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
extern unsigned int *auStack_c;
extern int fn_82FB93C8();


undefined8 fn_82FB9530(undefined4 *param_1,short param_2)

{
  short *psVar1;
  short *psStack_10;
  undefined1 auStack_c [12];
  
  psStack_10 = (short *)*param_1;
  psVar1 = (short *)param_1[1];
  if (psStack_10 != psVar1) {
    do {
      if (*psStack_10 == param_2) break;
      psStack_10 = psStack_10 + 1;
    } while (psStack_10 != psVar1);
    if (psStack_10 != psVar1) {
      fn_82FB93C8(auStack_c,param_1,&psStack_10);
      return 1;
    }
  }
  return 2;
}

