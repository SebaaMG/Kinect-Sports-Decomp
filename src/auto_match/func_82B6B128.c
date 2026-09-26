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
extern int fn_82AB15D0();
extern int fn_82B6B008();


undefined4 * fn_82B6B128(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)0x0;
  if (param_1 == (undefined4 *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a20,0xffffffff820d9770,0xb2);
  }
LAB_82b6b174:
  do {
    if (param_1 == (undefined4 *)0x0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a20,0xffffffff820d9770,0xba);
      return (undefined4 *)0x0;
    }
    piVar2 = param_1 + 6;
    if (param_1[6] == 0) {
      do {
        puVar1 = (undefined4 *)param_1[7];
        if (puVar1 == (undefined4 *)0x0) break;
        piVar2 = puVar1 + 6;
        param_1 = puVar1;
      } while (puVar1[6] == 0);
      if (*piVar2 != 0) goto LAB_82b6b174;
      puVar1 = (undefined4 *)fn_82B6B008(param_1[5],param_1[4],*param_1,param_1[1],param_1[2]);
      param_1[7] = puVar1;
      param_1 = puVar1;
    }
    else {
      puVar3 = *(undefined4 **)param_1[3];
      *(undefined4 *)param_1[3] = *puVar3;
    }
    if (puVar3 != (undefined4 *)0x0) {
      param_1[6] = param_1[6] + -1;
      return puVar3;
    }
  } while( true );
}

