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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8228E658();
extern unsigned int uStack_2c;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_8228E578(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  char in_RESERVE;
  byte bVar7;
  undefined4 uStack_2c;
  int *piStack_28;
  
  uStack_2c = 0;
  piStack_28 = (int *)0x0;
  fn_8228E658(&uStack_2c,*param_2 + 0x10);
  piVar2 = piStack_28;
  *param_1 = 0;
  param_1[1] = 0;
  uVar6 = ZEXT48(piStack_28);
  if (uVar6 != 0) {
    cVar3 = fn_8223AAC0(uVar6);
    bVar7 = (cVar3 == '\0') << 1;
    if (cVar3 != '\0') {
      if (param_1[1] != 0) {
        fn_822315A0();
      }
      param_1[1] = piVar2;
      *param_1 = uStack_2c;
    }
    do {
      puVar5 = (uint *)(uVar6 + 8);
      lVar4 = (ulonglong)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(lVar4,0,uVar6 + 8);
        *puVar5 = uVar1;
        bVar7 = 2;
      }
    } while (!(bool)(bVar7 >> 1 & 1));
    if ((int)lVar4 == 0) {
      (**(code **)(*piVar2 + 4))(uVar6);
    }
  }
  return param_1;
}

