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
extern int fn_82ABDBE8();
extern int fn_82B80EF8();


undefined8 fn_82B81938(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar8;
  undefined8 uVar7;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  
  cVar8 = fn_82ABDBE8();
  if (cVar8 == '\0') {
    uVar1 = param_1[3];
    uVar2 = param_2[3];
    if (((*(uint *)(uVar1 + 8) & 0x3f80) == 16000) && ((*(uint *)(uVar2 + 8) & 0x3f80) == 16000)) {
      uVar3 = *param_1;
      uVar4 = *param_2;
      uVar6 = uVar3 >> 0x19 & 7;
      if (uVar6 == (uVar4 >> 0x19 & 7)) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar10 = 0;
          do {
            uVar5 = *param_2;
            dVar11 = (double)fn_82B80EF8(uVar1,(*param_1 >> 5 & 0xff) >> (uVar10 & 0x3f) & 3,
                                           uVar3 & 0x1f);
            dVar12 = (double)fn_82B80EF8(uVar2,(uVar5 >> 5 & 0xff) >> (uVar10 & 0x3f) & 3,
                                           uVar4 & 0x1f);
            if (dVar11 != dVar12) goto LAB_82b81a18;
            uVar9 = uVar9 + 1;
            uVar10 = uVar10 + 2;
          } while (uVar9 < uVar6);
        }
        goto LAB_82b8195c;
      }
    }
LAB_82b81a18:
    uVar7 = 0;
  }
  else {
LAB_82b8195c:
    uVar7 = 1;
  }
  return uVar7;
}

