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
extern unsigned int *auStack_50;
extern unsigned int *auStack_5c;
extern int fn_82A2B9A0();
extern int fn_82A2C990();
extern int fn_82A2CF08();
extern int fn_82A2D260();
extern int fn_82F68CC0();
extern unsigned int uStack_60;


longlong fn_82A2D670(int param_1,ulonglong param_2,uint *param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uStack_60;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [80];
  
  uVar3 = (ulonglong)*(byte *)((int)param_3 + 7);
  uVar7 = (ulonglong)*param_3;
  uVar2 = uVar3 & 3;
  lVar5 = (param_2 & 0xfffff) * 0x1000 + (ulonglong)*(uint *)(param_1 + 0x34);
  if ((*(byte *)((int)param_3 + 7) & 3) == 0) {
    lVar6 = *(uint *)(param_1 + 0xac) + uVar7;
  }
  else {
    lVar6 = fn_82A2C990(param_1,uVar7,uVar2 - 1);
  }
  if ((uVar3 & 0x10) != 0) {
    XeCryptSha(lVar5,0x1000,0,0,0,0,auStack_50,0x14);
    if (uVar2 == (ulonglong)*(byte *)(param_1 + 0xca) + 1) {
      fn_82F68CC0(param_1 + 0xb0,auStack_50,0x14);
    }
    else {
      fn_82A2B9A0(param_1,uVar7,(*(byte *)((int)param_3 + 7) & 3) + 1,&uStack_60,auStack_5c);
      trapWord(6,(ulonglong)*(uint *)("XLNI_DET_MEDIA" + (int)(uVar2 << 2) + 0xc),0);
      lVar8 = ((ulonglong)uStack_60 & 0xfffff) * 0x1000 + (ulonglong)*(uint *)(param_1 + 0x34);
      fn_82F68CC0((((ulonglong)*param_3 /
                    (ulonglong)*(uint *)("XLNI_DET_MEDIA" + (int)(uVar2 << 2) + 0xc)) % 0xaa) * 0x18
                   + lVar8,auStack_50,0x14);
      uVar4 = (int)lVar8 - *(int *)(param_1 + 0x34);
      iVar1 = (((int)uVar4 >> 0xc) + (uint)((int)uVar4 < 0 && (uVar4 & 0xfff) != 0)) * 8 +
              *(int *)(param_1 + 0x30);
      *(char *)(iVar1 + 4) = *(char *)(iVar1 + 4) + -1;
    }
    *(byte *)((int)param_3 + 7) = *(byte *)((int)param_3 + 7) & 0xef;
  }
  lVar5 = fn_82A2CF08(param_1,lVar5,0x1000,
                            ((((ulonglong)(*(byte *)((int)param_3 + 7) >> 5) & 1) + lVar6) * 0x1000
                            & 0xffffffff000) + *(longlong *)(param_1 + 0x20));
  if (lVar5 < 0) {
    fn_82A2D260(param_1,lVar5);
  }
  *(byte *)((int)param_3 + 7) = *(byte *)((int)param_3 + 7) & 0xbf;
  return lVar5;
}

