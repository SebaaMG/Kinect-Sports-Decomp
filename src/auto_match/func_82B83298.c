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
extern int fn_82AD1A40();
extern int fn_82AD20C0();
extern int fn_82B8F3D8();


void fn_82B83298(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar6 = param_2;
  while( true ) {
    puVar5 = (uint *)*puVar6;
    if (puVar5 == (uint *)0x0) break;
    uVar1 = *puVar5;
    uVar4 = uVar1 >> 0x1e & 1;
    if (uVar4 == 0) {
      bVar3 = true;
      if ((uVar1 & 0xe000000) != 0) goto LAB_82b832d4;
    }
    else {
LAB_82b832d4:
      bVar3 = false;
    }
    if (bVar3) {
      if (uVar4 == 0) {
        bVar3 = true;
        if ((uVar1 & 0xe000000) != 0) goto LAB_82b832f4;
      }
      else {
LAB_82b832f4:
        bVar3 = false;
      }
      if (bVar3) {
        bVar3 = true;
        if ((uVar1 & 0x1ffe000) == 0) goto LAB_82b8330c;
      }
      else {
LAB_82b8330c:
        bVar3 = false;
      }
      if (bVar3) {
        fn_82B8F3D8(param_2[7],((ulonglong)(uVar1 >> 0xd) & 0xfff) - 1,param_2,param_1);
      }
    }
    if ((uint *)*puVar6 == puVar5) {
      puVar6 = puVar5 + 1;
    }
  }
  puVar5 = param_2 + 1;
  puVar6 = puVar5;
  while( true ) {
    puVar2 = (uint *)*puVar6;
    if (puVar2 == (uint *)0x0) break;
    if (puVar2[4] != 0) {
      uVar1 = *puVar2;
      uVar4 = uVar1 >> 0x1e & 1;
      if (uVar4 == 0) {
        bVar3 = true;
        if ((uVar1 & 0xe000000) != 0) goto LAB_82b8337c;
      }
      else {
LAB_82b8337c:
        bVar3 = false;
      }
      if (bVar3) {
        if (uVar4 == 0) {
          bVar3 = true;
          if ((uVar1 & 0xe000000) != 0) goto LAB_82b8339c;
        }
        else {
LAB_82b8339c:
          bVar3 = false;
        }
        if (bVar3) {
          bVar3 = true;
          if ((uVar1 & 0x1ffe000) == 0) goto LAB_82b833b4;
        }
        else {
LAB_82b833b4:
          bVar3 = false;
        }
        if (bVar3) {
          fn_82B8F3D8(param_2[7],((ulonglong)(uVar1 >> 0xd) & 0xfff) - 1,param_2,param_1);
        }
      }
    }
    if ((uint *)*puVar6 == puVar2) {
      puVar6 = puVar2 + 2;
    }
  }
  for (puVar6 = (uint *)*param_2; puVar6 != (uint *)0x0; puVar6 = (uint *)puVar6[1]) {
    if ((*puVar6 & 0x40000000) == 0) {
      bVar3 = true;
      if ((*puVar6 & 0xe000000) != 0) goto LAB_82b83410;
    }
    else {
LAB_82b83410:
      bVar3 = false;
    }
    if (bVar3) {
      for (puVar2 = (uint *)*puVar5; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[2]) {
        if (puVar2[4] != 0) {
          if ((*puVar2 & 0x40000000) == 0) {
            bVar3 = true;
            if ((*puVar2 & 0xe000000) != 0) goto LAB_82b8344c;
          }
          else {
LAB_82b8344c:
            bVar3 = false;
          }
          if (bVar3) {
            fn_82AD1A40(puVar2[4],puVar6[3],param_1);
          }
        }
      }
    }
  }
  do {
    puVar6 = (uint *)*puVar5;
    if (puVar6 == (uint *)0x0) {
      return;
    }
    uVar1 = puVar6[4];
    if (uVar1 != 0) {
      if ((*puVar6 & 0x40000000) == 0) {
        bVar3 = true;
        if ((*puVar6 & 0xe000000) != 0) goto LAB_82b834a4;
      }
      else {
LAB_82b834a4:
        bVar3 = false;
      }
      if (bVar3) {
        for (puVar2 = (uint *)*param_2; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[1]) {
          if ((*puVar2 & 0x40000000) == 0) {
            bVar3 = true;
            if ((*puVar2 & 0xe000000) != 0) goto LAB_82b834d4;
          }
          else {
LAB_82b834d4:
            bVar3 = false;
          }
          if (bVar3) {
            fn_82AD1A40(uVar1,puVar2[3],param_1);
          }
        }
        fn_82AD20C0(uVar1,puVar6,param_1);
      }
    }
    if ((uint *)*puVar5 == puVar6) {
      puVar5 = puVar6 + 2;
    }
  } while( true );
}

