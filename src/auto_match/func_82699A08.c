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
extern int fn_82698C48();
extern int fn_826997B0();


undefined8 fn_82699A08(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int aiStack_30 [12];
  
  iVar1 = *(int *)(param_2 + 0x14);
  uVar2 = param_1[1];
  aiStack_30[0] = iVar1;
  uVar4 = fn_82698C48(param_1,0,uVar2,aiStack_30,0xffffffff82698c28);
  if (uVar4 < uVar2) {
    iVar6 = uVar4 * 4;
    iVar3 = *(int *)(*param_1 + iVar6);
    uVar5 = uVar4;
    while ((((iVar3 != 0 && (uVar5 = uVar5 + 1, iVar3 != param_2)) &&
            (iVar1 == *(int *)(iVar3 + 0x14))) && (uVar5 < uVar2))) {
      iVar6 = iVar6 + 4;
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(iVar6 + *param_1);
    }
    if ((uVar4 < uVar2) && (iVar3 == param_2)) {
      fn_826997B0(param_1);
      param_1[3] = 0;
      return 1;
    }
  }
  return 0;
}

