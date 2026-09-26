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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82EE62E8();
extern int fn_82EE6350();
extern unsigned int uStack_3c;
extern unsigned int uStack_3e;


ulonglong fn_82EE68C0(int param_1,short param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  short sStack_40;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  
  if (*(uint *)(param_1 + 0x104) < 0xffff) {
    if (*(uint *)(param_1 + 0x104) != 0) {
      uVar3 = 0;
      do {
        fn_82EE6350(param_1 + 0x48,uVar3,&sStack_40);
        if (*(short *)CONCAT22(sStack_40,uStack_3e) == param_2) {
          uVar1 = fn_82EE6350(param_1 + 0x48,uVar3,&sStack_40);
          uVar1 = ((uVar1 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)CONCAT22(sStack_40,uStack_3e);
          if (uVar1 == 0) {
            return 0xffffffff8000ffff;
          }
          *(undefined4 *)((int)uVar1 + 4) = param_3;
          return 0;
        }
        uVar3 = uVar3 + 1 & 0xffff;
      } while (uVar3 < *(uint *)(param_1 + 0x104));
    }
    sStack_40 = param_2;
    uStack_3c = param_3;
    lVar2 = fn_82EE62E8(param_1 + 0x48,CONCAT44(CONCAT22(param_2,uStack_3e),param_3),0);
    uVar1 = -(ulonglong)(lVar2 == 0) & 0xffffffff8007000e;
  }
  else {
    uVar1 = 0xffffffffc00d3a9a;
  }
  return uVar1;
}

