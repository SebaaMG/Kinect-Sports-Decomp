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
extern int fn_82ABE190();


undefined8 fn_82AC89B0(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = (uint *)*param_1;
  do {
    if (puVar1 == (uint *)0x0) {
      return 0;
    }
    cVar3 = fn_82ABE190(puVar1);
    if (cVar3 != '\0') {
      uVar2 = *puVar1;
      uVar6 = uVar2 >> 0xd & 0xfff;
      if ((((uVar6 ^ param_2) & 0xfffffff0) == 0) && ((uVar6 & param_2 & 0xf) != 0)) {
        uVar6 = uVar2 >> 0x19 & 7;
        uVar4 = 0;
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar5 = 0;
          do {
            uVar7 = uVar7 + 1;
            uVar4 = 1 << ((uVar2 >> 5 & 0xff) >> (uVar5 & 0x3f) & 3) | uVar4;
            uVar5 = uVar5 + 2;
          } while (uVar7 < uVar6);
        }
        if ((uVar4 & param_2 & 0xf) != 0) {
          return 1;
        }
      }
    }
    puVar1 = (uint *)puVar1[1];
  } while( true );
}

