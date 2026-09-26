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
extern int fn_82F35618();


undefined8 fn_82F36020(int param_1,short param_2,uint param_3,undefined2 *param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  short *psStack_40;
  int aiStack_3c [15];
  
  if (param_4 == (undefined2 *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar2 = 0;
    *param_4 = 0xffff;
    if (*(int *)(param_1 + 0x130) != 0) {
      do {
        fn_82F35618(param_1 + 200,uVar2,&psStack_40);
        if ((*psStack_40 == param_2) &&
           (fn_82F35618(param_1 + 200,uVar2,aiStack_3c), *(ushort *)(aiStack_3c[0] + 2) == param_3)
           ) {
          *param_4 = (short)uVar2;
          return 0;
        }
        uVar2 = uVar2 + 1;
      } while ((uVar2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x130));
    }
    uVar1 = 0xffffffffc00d3a9c;
  }
  return uVar1;
}

