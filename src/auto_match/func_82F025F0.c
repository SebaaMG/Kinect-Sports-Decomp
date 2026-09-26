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
extern int fn_82F022F0();
extern int fn_82F02410();


void fn_82F025F0(undefined4 *param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  
  if ((uint)param_1[0xd] < (uint)param_1[1]) {
    param_1[4] = 0x20;
    param_1[3] = 0;
    param_1[1] = 0;
    param_1[0xe] = 1;
    param_1[2] = *param_1;
  }
  if (param_1[0xb] != 0) {
    fn_82F02410(param_1,1,1);
  }
  if ((param_1[4] != 0x20) && (iVar3 = -param_1[4], 0 < iVar3 + 0x20)) {
    lVar4 = (ulonglong)(iVar3 + 0x1fU >> 3) + 1;
    do {
      if (param_1[0xb] == 0) {
        *(undefined1 *)param_1[2] = *(undefined1 *)(param_1 + 3);
        iVar3 = param_1[1] + 1;
        param_1[2] = param_1[2] + 1;
      }
      else {
        uVar2 = (ulonglong)(uint)param_1[2];
        iVar1 = fn_82F022F0(param_1,*(undefined1 *)(param_1 + 3),uVar2,uVar2 + 1);
        iVar3 = param_1[2];
        param_1[2] = iVar1 + iVar3;
        iVar3 = (param_1[1] - (int)uVar2) + iVar1 + iVar3;
      }
      lVar4 = lVar4 + -1;
      param_1[1] = iVar3;
      param_1[3] = param_1[3] << 8;
    } while (lVar4 != 0);
  }
  param_1[4] = 0x20;
  param_1[3] = 0;
  return;
}

