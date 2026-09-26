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
extern int fn_82A2D670();


undefined8 fn_82A2E260(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint *puVar7;
  
  puVar2 = *(uint **)(param_1 + 0x30);
  bVar1 = *(byte *)(param_1 + 200);
  if (param_3 == 0xffffffff) {
    uVar4 = *(byte *)(param_1 + 0xca) + 1;
  }
  else {
    uVar4 = 0;
  }
  uVar5 = 0;
  do {
    uVar6 = 0;
    puVar7 = puVar2;
    if ((ulonglong)bVar1 != 0) {
      do {
        if (((((*(byte *)((int)puVar7 + 7) & 3) == uVar5) &&
             ((*(byte *)((int)puVar7 + 7) & 0x40) != 0)) && (param_2 <= *puVar7)) &&
           ((*puVar7 <= param_3 && (uVar3 = fn_82A2D670(param_1,uVar6,puVar7), (int)uVar3 < 0))))
        {
          return uVar3;
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 2;
      } while ((uVar6 & 0xffffffff) < (ulonglong)bVar1);
    }
    uVar5 = uVar5 + 1;
    if (uVar4 < uVar5) {
      return 0;
    }
  } while( true );
}

