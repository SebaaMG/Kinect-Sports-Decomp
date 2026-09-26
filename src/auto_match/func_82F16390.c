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
extern int fn_82F02410();
extern int fn_82F116E8();
extern int fn_82F15A98();
extern unsigned int lbl_831B8D98;
extern unsigned int lbl_831B8E98;


void fn_82F16390(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_2 + 4);
  uVar2 = *(uint *)(param_2 + 8);
  uVar3 = *(uint *)(param_2 + 0xc);
  uVar4 = *(uint *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 0x14);
  uVar6 = *(uint *)(param_2 + 0x18);
  uVar7 = *(undefined4 *)(param_1 + 0x1ebc);
  uVar8 = fn_82F116E8();
  uVar8 = uVar8 ^ (((((iVar1 << 1 | uVar2) << 1 | uVar3) << 1 | uVar4) << 1 | uVar5) << 1 | uVar6);
  fn_82F02410(uVar7,*(undefined4 *)(&lbl_831B8D98 + uVar8 * 4),(&lbl_831B8E98)[uVar8]);
  if (*(int *)(param_1 + 0x6f98) != 0) {
    *(uint *)(param_1 + 0x6fbc) = (uint)(byte)(&lbl_831B8E98)[uVar8] + *(int *)(param_1 + 0x6fbc);
  }
  if ((*(int *)(param_1 + 4) != 8) || (*(int *)(param_1 + 0x6ef8) == 0)) {
    fn_82F02410(uVar7,*(undefined4 *)(param_2 + 0x1c),1);
  }
  if (((*(uint *)(param_1 + 0x924) & 4) != 0) && (*(int *)(param_1 + 0x6f04) == 0)) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_2 + 0x7c),1);
  }
  if ((*(int *)(param_1 + 0xa0c) != 0) && (*(int *)(param_1 + 0x97c) != 0)) {
    if (*(int *)(param_1 + 0x984) == 0) {
      if (*(char *)(param_1 + 0x980) == '\x01') {
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),
                          (((ulonglong)*(uint *)(param_1 + 0x588) & 0x7fffffff) * 2 +
                          (ulonglong)*(uint *)(param_1 + 0x590)) - 1 !=
                          (ulonglong)*(uint *)(param_2 + 0x60),1);
      }
      else {
        fn_82F15A98(param_1,(int)(*(uint *)(param_2 + 0x60) + 1) >> 1,0);
      }
    }
  }
  return;
}

