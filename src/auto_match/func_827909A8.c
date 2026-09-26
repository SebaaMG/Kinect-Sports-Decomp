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
extern int fn_826BCF78();
extern int fn_82F66AA0();


undefined8 fn_827909A8(uint *param_1,undefined2 *param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_3 == 0) {
LAB_827909c4:
    uVar1 = 0;
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
    if (param_3 != 0) {
      do {
        iVar2 = fn_82F66AA0(*param_2);
        if (iVar2 == 0) goto LAB_827909c4;
        uVar5 = uVar6 << 4;
        uVar3 = fn_826BCF78(*param_2);
        uVar6 = uVar3 & 0xffff;
        if ((uVar6 < 0x30) || (0x39 < uVar6)) {
          if ((0x60 < uVar6) && (uVar6 < 0x67)) {
            uVar3 = (uVar6 - 1 & 0xf) + 10;
            goto LAB_82790a34;
          }
        }
        else {
          uVar3 = uVar3 & 0xf;
LAB_82790a34:
          uVar5 = uVar3 | uVar5;
        }
        uVar4 = uVar4 + 1;
        param_2 = param_2 + 1;
        uVar6 = uVar5;
      } while (uVar4 < param_3);
    }
    *param_1 = uVar5;
    uVar1 = 1;
  }
  return uVar1;
}

