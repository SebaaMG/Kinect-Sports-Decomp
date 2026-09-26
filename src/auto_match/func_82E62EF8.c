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
extern int fn_82E63998();


longlong fn_82E62EF8(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int *apiStack_40 [16];
  
  apiStack_40[0] = (int *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    lVar2 = fn_82E63998(param_1[0x15],param_1[0x16],apiStack_40);
    if ((-1 < lVar2) && (lVar2 = (**(code **)(*param_1 + 0x80))(param_1,apiStack_40[0]), -1 < lVar2)
       ) {
      uVar4 = 0;
      if (param_1[0x15] != 0) {
        iVar3 = 0;
        do {
          if ((*(int *)(param_1[0x17] + iVar3) != 0) &&
             (lVar2 = (**(code **)(*apiStack_40[0] + 0x8c))(apiStack_40[0],uVar4), lVar2 < 0))
          goto LAB_82e62fd0;
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 4;
        } while ((uVar4 & 0xffffffff) < (ulonglong)(uint)param_1[0x15]);
      }
      piVar1 = apiStack_40[0];
      apiStack_40[0] = (int *)0x0;
      *param_2 = piVar1;
    }
LAB_82e62fd0:
    if (apiStack_40[0] != (int *)0x0) {
      (**(code **)(*apiStack_40[0] + 8))();
    }
  }
  return lVar2;
}

