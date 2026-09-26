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
extern int fn_8277E9F8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined8 fn_82781330(int param_1,uint param_2,uint param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  uStack_1c = param_3 & 0xbfffffff;
  uStack_18 = param_4 & 0xbfffffff;
  iVar3 = *(int *)(param_1 + 0x110);
  uStack_20 = param_2 & 0xbfffffff;
  iVar6 = (param_2 & 0x3ff) * 8;
  pfVar5 = (float *)(*(int *)((uStack_1c >> 8 & 0xfffffc) + iVar3) + (param_3 & 0x3ff) * 8);
  iVar4 = *(int *)((uStack_20 >> 8 & 0xfffffc) + iVar3);
  pfVar7 = (float *)(*(int *)((uStack_18 >> 8 & 0xfffffc) + iVar3) + (param_4 & 0x3ff) * 8);
  fVar1 = pfVar5[1];
  fVar2 = *pfVar5;
  fVar1 = (fVar1 - *(float *)(iVar4 + iVar6 + 4)) * (*pfVar7 - fVar2) -
          (pfVar7[1] - fVar1) * (fVar2 - *(float *)(iVar4 + iVar6));
  if (fVar1 != lbl_821AAD20) {
    if (lbl_821AAD20 < fVar1) {
      return 0;
    }
    fn_8277E9F8(param_1 + 0x184,&uStack_20);
  }
  return 1;
}

