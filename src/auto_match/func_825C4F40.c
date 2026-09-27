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
extern int fn_825200A8();
extern float lbl_82195644;
extern unsigned int uStack_c;


longlong fn_825C4F40(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar3;
  longlong lVar2;
  uint uVar4;
  undefined4 uStack_c;
  
  iVar3 = fn_825200A8(param_2 + 8,param_1 + 0x14);
  if ((((((iVar3 == 0) || (iVar3 = fn_825200A8(param_2 + 0xc,param_1 + 0x18), iVar3 == 0)) ||
        (iVar3 = (int)param_1, iVar1 = (int)param_2,
        *(int *)(iVar3 + 0x30) != *(int *)(iVar1 + 0x38))) ||
       ((*(float *)(iVar3 + 0x34) != *(float *)(iVar1 + 0x3c) ||
        (*(float *)(iVar3 + 0x94) != *(float *)(iVar1 + 0x50))))) ||
      ((*(float *)(iVar3 + 100) != *(float *)(iVar1 + 0x58) ||
       ((*(float *)(iVar3 + 0x70) != *(float *)(iVar1 + 0x5c) ||
        (uStack_c = (int)(longlong)(*(float *)(iVar3 + 0x58) * lbl_82195644),
        uStack_c != *(int *)(iVar1 + 0x6c))))))) ||
     ((*(float *)(iVar3 + 0x84) != *(float *)(iVar1 + 0x70) ||
      (*(int *)(iVar3 + 0xf8) != *(int *)(iVar1 + 0x80))))) {
    lVar2 = 0;
  }
  else {
    uVar4 = *(uint *)(iVar3 + 8);
    if (2000 < uVar4) {
      uVar4 = 2000;
    }
    lVar2 = -((ulonglong)(*(uint *)(iVar1 + 0x18) < uVar4) - 1);
  }
  return lVar2;
}

