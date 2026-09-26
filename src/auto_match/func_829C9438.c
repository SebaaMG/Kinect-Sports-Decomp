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
extern int fn_8264D1C8();
extern unsigned int lbl_8321501C;
extern U64 storeWordConditionalIndexed();


void fn_829C9438(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 in_r7;
  undefined8 in_r8;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  undefined8 in_MSR;
  char in_RESERVE;
  byte in_cr0;
  
  sync(0);
  do {
    puVar4 = (uint *)(param_1 + 0x24);
    uVar3 = (ulonglong)*puVar4 + 1;
    if (in_RESERVE != '\0') {
      uVar5 = storeWordConditionalIndexed(uVar3,0,param_1 + 0x24);
      *puVar4 = uVar5;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((uVar3 & 0xffffffff) == 2) {
    puVar1 = (undefined4 *)param_1;
    fn_8264D1C8(lbl_8321501C,*puVar1,puVar1[1],puVar1[2],in_r7,in_r8,in_MSR);
    if (puVar1[3] != 0) {
      if (puVar1[7] == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)puVar1[7];
      }
      fn_8264D1C8(lbl_8321501C,puVar1[3],uVar2,0);
      uVar3 = 1;
      uVar5 = 0;
      do {
        if ((puVar1[7] == 0) || (((uint)puVar1[8] & uVar3) == 0)) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(puVar1[7] + uVar5 + 4);
        }
        fn_8264D1C8(lbl_8321501C,*(undefined4 *)((int)puVar1 + uVar5 + 0x10),uVar2,0);
        uVar5 = uVar5 + 4;
        uVar3 = (uVar3 & 0x7fffffff) << 1 | uVar3 >> 0x1f;
      } while (uVar5 < 0xc);
    }
    *puVar1 = 0;
    puVar1[3] = 0;
  }
  return;
}

