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
extern unsigned int *auStack_40;
extern int fn_82E57A78();
extern int fn_82E57F48();
extern int fn_82E58808();
extern int fn_82F6ADA8();


longlong fn_82E5EE70(ulonglong param_1,short *param_2,ushort *param_3)

{
  longlong lVar1;
  int iVar2;
  ushort uVar3;
  ushort auStack_40 [2];
  int aiStack_3c [15];
  
  if ((((param_1 & 0xffffffff) == 0) || (param_2 == (short *)0x0)) || (param_3 == (ushort *)0x0)) {
    lVar1 = -0x7fffbffd;
  }
  else if (*param_2 == 0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    uVar3 = 0;
    auStack_40[0] = 0;
    aiStack_3c[0] = 0;
    lVar1 = fn_82E57A78(param_1,auStack_40);
    if (-1 < lVar1) {
      if (auStack_40[0] != 0) {
        do {
          lVar1 = fn_82E58808(param_1,uVar3,aiStack_3c);
          if ((lVar1 < 0) || (aiStack_3c[0] == 0)) break;
          iVar2 = fn_82F6ADA8(param_2);
          if (iVar2 == 0) {
            *param_3 = uVar3;
            return lVar1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < auStack_40[0]);
      }
      lVar1 = fn_82E57F48(param_1,param_2);
      if (-1 < lVar1) {
        *param_3 = auStack_40[0];
      }
    }
  }
  return lVar1;
}

