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
extern unsigned int *auStack_40;
extern int fn_82ACA5E0();
extern int fn_82AF8968();


longlong fn_82AF8E30(undefined8 param_1,int param_2,int param_3,ulonglong *param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong auStack_40 [8];
  
  *(uint *)(param_4 + 1) = *(uint *)(param_4 + 1) & 0xffffffe0;
  uVar5 = 0;
  cVar2 = fn_82ACA5E0(param_2);
  if (cVar2 == '\0') {
    uVar3 = *(uint *)(param_2 + 8) >> 1;
    uVar6 = 0;
    uVar7 = 0;
    uVar1 = *(uint *)(param_3 + 8) >> 1;
    if ((uVar3 & 3) != 0) {
      uVar6 = 2;
    }
    if ((uVar3 & 0xc) != 0) {
      uVar6 = uVar6 + 2;
    }
    if ((uVar1 & 3) != 0) {
      uVar7 = 2;
    }
    if ((uVar1 & 0xc) != 0) {
      uVar7 = uVar7 + 2;
    }
  }
  else {
    uVar6 = (ulonglong)(*(uint *)(param_2 + 8) >> 0xe) & 7;
    uVar7 = (ulonglong)(*(uint *)(param_3 + 8) >> 0xe) & 7;
    fn_82AF8968(param_1,param_2,param_3,param_4);
    if ((param_4[1] & 0x1f00000000) != 0) {
      uVar5 = 0;
      uVar3 = 0;
      auStack_40[0] = *param_4;
      if ((param_4[1] & 0x1f00000000) != 0) {
        uVar4 = 0;
        do {
          uVar3 = uVar3 + 1;
          uVar5 = (uint)(1 << ((uint)(((2L << (uVar4 + 3 & 0x3f)) - 1U &
                                       *(ulonglong *)
                                        ((int)auStack_40 + ((uint)uVar4 >> 3 & 0x1ffffff8)) &
                                      -1L << (uVar4 & 0x3f)) >> (uVar4 & 0x3f)) & 3)) | uVar5;
          uVar4 = uVar4 + 4;
        } while (uVar3 < (*(uint *)(param_4 + 1) & 0x1f));
      }
      uVar5 = ((0x8da691691448U >> (uVar5 & 0x7f)) >> (uVar5 & 0x7f)) >> (uVar5 & 0x7f) & 7;
    }
  }
  *(uint *)(param_4 + 1) = (uint)(uVar5 << 5) | *(uint *)(param_4 + 1) & 0xffffff1f;
  return (uVar7 - uVar5) + uVar6;
}

