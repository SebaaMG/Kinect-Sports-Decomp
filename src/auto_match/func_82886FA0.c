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
extern int fn_82886A90();
extern int fn_82887E80();
extern int fn_82888170();
extern int fn_82888228();
extern unsigned int lbl_83212A1C;


undefined8 fn_82886FA0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = param_3 >> 3;
  iVar2 = *(int *)(param_2 * 4 + param_1);
  if ((1 << (param_3 - (param_3 & 0xfffffff8) & 0x3f) & (uint)*(byte *)(iVar2 + uVar4 + 0x1c)) != 0)
  {
    uVar5 = fn_82887E80();
    fn_82888170(uVar5,2,0x22,1);
    uVar5 = 0x22;
    goto LAB_828870dc;
  }
  uVar1 = *(uint *)(iVar2 + 0xc);
  uVar3 = 1 << (*(uint *)(param_2 * 4 + lbl_83212A1C) & 0x3f);
  uVar7 = (uVar3 >> 2) + uVar1;
  if (uVar3 <= uVar7) {
    uVar7 = uVar7 - uVar3;
  }
  uVar6 = uVar1 - (uVar3 >> 1);
  if (uVar3 <= uVar6) {
    uVar6 = uVar6 + uVar3;
  }
  if (uVar6 < uVar7) {
    if (uVar6 < param_3) goto LAB_8288705c;
  }
  else {
    if (uVar6 < param_3) goto LAB_82887064;
LAB_8288705c:
    if (param_3 <= uVar7) {
LAB_82887064:
      *(byte *)(uVar4 + iVar2 + 0x1c) =
           (byte)(1 << (param_3 + uVar4 * -8 & 0x3f)) | *(byte *)(uVar4 + iVar2 + 0x1c);
      if (uVar7 <= uVar1) {
        if ((param_3 <= uVar1) && (uVar7 < param_3)) {
          return 1;
        }
        fn_82886A90(param_1,param_2);
        return 1;
      }
      if (param_3 <= uVar1) {
        return 1;
      }
      if (uVar7 < param_3) {
        return 1;
      }
      fn_82886A90(param_1,param_2);
      return 1;
    }
  }
  uVar5 = fn_82887E80();
  fn_82888170(uVar5,2,0x23,1);
  uVar5 = 0x23;
LAB_828870dc:
  fn_82888228(param_2,uVar5,1);
  return 0;
}

