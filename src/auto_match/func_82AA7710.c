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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern int fn_82F68CC0();
extern unsigned int uStack_3e;


void fn_82AA7710(uint *param_1,uint *param_2,uint param_3)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined2 uStack_3e;
  
  if (param_3 == 0x40001) {
    uVar6 = *param_2;
    *param_1 = uVar6 << 0x18 | (uVar6 & 0xff00) << 8 | uVar6 >> 8 & 0xff00 | uVar6 >> 0x18;
  }
  else if (param_3 == 0x20001) {
    *(ushort *)param_1 = *(ushort *)param_2 >> 8 | *(ushort *)param_2 << 8;
  }
  else if (param_3 == 0x40002) {
    bVar2 = *(byte *)((int)param_2 + 1);
    uStack_3e = CONCAT11(bVar2,*(undefined1 *)param_2);
    *(ushort *)param_1 =
         (ushort)(((uint)(byte)*param_2 << 0x18) >> 0x18) | (ushort)*(byte *)((int)param_2 + 2) << 8
    ;
    *(ushort *)((int)param_1 + 2) = (ushort)bVar2 | uStack_3e << 8;
  }
  else {
    uVar3 = param_3 & 0xffff;
    uVar6 = param_3 >> 0x10;
    if (((param_3 & 0xffff) == 0) || (uVar3 == uVar6)) {
      if (uVar6 != 0) {
        fn_82F68CC0();
      }
    }
    else {
      uVar6 = uVar6 >> (0x20U - (int)LZCOUNT(uVar3 - 1) & 0x3f);
      uVar5 = (ulonglong)uVar6;
      if (param_1 == param_2) {
        uVar5 = (uVar5 + 1 & 0xffffffff) >> 1;
        if (uVar5 != 0) {
          param_2 = (uint *)((uVar6 - 1) * uVar3 + (int)param_2);
          do {
            if ((param_3 & 0xffff) != 0) {
              uVar6 = uVar3;
              puVar4 = param_2;
              do {
                uVar1 = *(undefined1 *)(((int)param_1 - (int)param_2) + (int)puVar4);
                *(undefined1 *)(((int)param_1 - (int)param_2) + (int)puVar4) = *(undefined1 *)puVar4
                ;
                *(undefined1 *)puVar4 = uVar1;
                puVar4 = (uint *)((int)puVar4 + 1);
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            uVar5 = uVar5 - 1;
            param_1 = (uint *)((int)param_1 + uVar3);
            param_2 = (uint *)((int)param_2 - uVar3);
          } while (uVar5 != 0);
        }
      }
      else if (uVar5 != 0) {
        param_2 = (uint *)((uVar6 - 1) * uVar3 + (int)param_2);
        do {
          fn_82F68CC0(param_1,param_2,uVar3);
          uVar5 = uVar5 - 1;
          param_2 = (uint *)((int)param_2 - uVar3);
          param_1 = (uint *)((int)param_1 + uVar3);
        } while (uVar5 != 0);
      }
    }
  }
  return;
}

