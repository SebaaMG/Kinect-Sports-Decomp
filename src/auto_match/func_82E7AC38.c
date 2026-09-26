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
extern int fn_82E780A8();
extern int fn_82E78690();
extern int fn_82E79B28();
extern int fn_82EEB7A8();
extern int fn_82F68CC0();


ulonglong fn_82E7AC38(int param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint auStack_50 [20];
  
  if ((param_2 == 0) ||
     (uVar5 = (uint)*(ushort *)(param_2 + 10), uVar5 < *(ushort *)(param_2 + 0x40))) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar2 = 0;
    if (uVar5 < *(uint *)(param_1 + 0x1e0)) {
      do {
        uVar1 = *(uint *)(param_1 + 0x1e0);
        lVar6 = (ulonglong)uVar1 - 1;
        lVar3 = fn_82E78690(param_1 + 0x178,lVar6,auStack_50);
        if ((-(uint)(lVar3 != 0) & auStack_50[0]) == 0) goto LAB_82e7ad50;
        fn_82EEB7A8(param_1 + 0x1e4);
        if (((ulonglong)uVar1 <= (ulonglong)*(uint *)(param_1 + 0x1e0)) &&
           (iVar4 = fn_82E780A8(param_1 + 0x178,lVar6), -1 < iVar4)) {
          *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + -1;
        }
      } while (uVar5 < *(uint *)(param_1 + 0x1e0));
    }
    fn_82F68CC0(param_1 + 0x13c,param_2,0x3c);
    if ((ulonglong)*(ushort *)(param_1 + 0x146) != 0) {
      lVar3 = fn_82E78690(param_1 + 0x178,(ulonglong)*(ushort *)(param_1 + 0x146) - 1,auStack_50);
      uVar5 = -(uint)(lVar3 != 0) & auStack_50[0];
      if (uVar5 == 0) {
LAB_82e7ad50:
        uVar2 = 0xffffffff8000ffff;
      }
      else {
        *(undefined4 *)(uVar5 + 0x17) = *(undefined4 *)(param_2 + 0x3c);
        if (*(int *)(uVar5 + 300) != 0) {
          if (*(short *)(param_2 + 0x40) == 0) {
            *(undefined4 *)(uVar5 + 300) = 0;
            *(undefined1 *)(uVar5 + 0x130) = 0;
            *(undefined4 *)(uVar5 + 0x134) = 0;
          }
          else if (*(short *)(param_2 + 0x40) != 0) {
            do {
              lVar3 = fn_82E78690(param_1 + 0x178,(*(ushort *)(param_1 + 0x146) - uVar2) + -1,
                                    auStack_50);
              uVar5 = -(uint)(lVar3 != 0) & auStack_50[0];
              if (uVar5 == 0) goto LAB_82e7ad50;
              uVar2 = uVar2 + 1 & 0xffff;
              *(undefined4 *)(uVar5 + 0x134) = *(undefined4 *)(param_2 + 0x44);
              *(undefined1 *)(uVar5 + 0x13c) = *(undefined1 *)(param_2 + 0x48);
            } while (uVar2 < *(ushort *)(param_2 + 0x40));
          }
        }
        uVar2 = fn_82E79B28(param_1);
      }
    }
  }
  return uVar2;
}

