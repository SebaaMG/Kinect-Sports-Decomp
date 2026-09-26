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
extern unsigned int *auStack_60;
extern int fn_828F6FA8();
extern int fn_829410A8();
extern int fn_82941178();


undefined8 fn_82941580(int *param_1,uint param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 auStack_60 [96];
  
  if (param_2 != 0) {
    if ((param_2 & 0x550000) == 0) {
      cVar2 = ((param_2 & 0xaa0000) == 0) + '\x02';
    }
    else {
      cVar2 = '\x01';
    }
    uVar3 = 0;
    if (param_1[0x1c6] != 0) {
      do {
        uVar1 = fn_82941178(param_1);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        fn_828F6FA8(auStack_60,0x20,0xffffffff820347d0,uVar3);
        uVar1 = fn_829410A8(param_1,0xffffffff820347c0,uVar3);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = (**(code **)(*param_1 + 0x184))(param_1,auStack_60,cVar2,cVar2,cVar2,cVar2);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar1 = fn_829410A8(param_1,0xffffffff820347a8);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffffffff) < (ulonglong)(uint)param_1[0x1c6]);
    }
  }
  return 0;
}

