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
extern int fn_82A3FF60();
extern int fn_82A49BE0();
extern unsigned int lbl_83223448;
extern U64 storeWordConditionalIndexed();


undefined8 fn_82A76260(int *param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  char in_RESERVE;
  
  uVar2 = (**(code **)(*param_1 + 4))();
  if (-1 < (int)uVar2) {
    iVar3 = fn_82A49BE0(param_2);
    param_1[0xb] = iVar3;
    if (iVar3 != 0) {
      trapDoubleWordImmediate(6,param_4 & 0xffffffff,0);
      lVar4 = (longlong)(int)(uint)*(ushort *)(param_2 + 0xc) *
              (longlong)
              (int)(((ulonglong)*(uint *)(param_2 + 4) * (param_3 & 0xffffffff)) /
                   (param_4 & 0xffffffff));
      param_1[0xd] = (int)lVar4;
      uVar6 = *(ushort *)(iVar3 + 0xc);
      if (((uVar6 < 0x10) || ((uVar6 - 1 & uVar6) != 0)) || (uVar6 == 0)) {
        uVar6 = 0x10;
      }
      iVar3 = fn_82A3FF60(0xffffffff83219d50,lVar4,0x20970006,uVar6);
      param_1[0xe] = iVar3;
      bVar1 = iVar3 == 0;
      if (!bVar1) {
        param_1[0xf] = 0;
        trapWord(6,(ulonglong)*(ushort *)(param_1[0xb] + 0xc),0);
        param_1[0x10] = (uint)param_1[0xd] / (uint)*(ushort *)(param_1[0xb] + 0xc);
        do {
          uVar5 = (ulonglong)lbl_83223448;
          if (in_RESERVE != '\0') {
            lbl_83223448 = storeWordConditionalIndexed(uVar5 + 1,0,0xffffffff83223448);
            bVar1 = true;
          }
        } while (!bVar1);
        param_1[0xc] = (int)(uVar5 + 1);
        return 0;
      }
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}

