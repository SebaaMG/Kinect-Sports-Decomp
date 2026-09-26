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
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223B688();
extern int fn_822ABA88();
extern int fn_82397F30();
extern int fn_8247B210();
extern int fn_8260D428();
extern unsigned int uStack_30;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern U64 storeWordConditionalIndexed();


bool fn_822EC248(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  char in_RESERVE;
  byte bVar7;
  uint uStack_50;
  uint uStack_4c;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  
  iVar4 = fn_82397F30(*(undefined4 *)(param_1 + 0x10));
  bVar7 = (iVar4 == 0) << 1;
  if (iVar4 != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 0x1c);
    iVar4 = fn_822ABA88(*(undefined4 *)(piVar1[4] * 4 + *piVar1),
                         *(uint *)(*(int *)(param_1 + 0xc) + 0x28) ^ 1);
    if (*(int *)(*(int *)(iVar4 + 0x110) + 0x18) == 2) {
      fn_8247B210(&uStack_50,*(int *)(iVar4 + 0x110) + 4,2);
      uVar6 = (ulonglong)uStack_4c;
      if (uVar6 != 0) {
        do {
          puVar5 = (uint *)(uVar6 + 4);
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,uVar6 + 4);
            *puVar5 = uVar2;
            bVar7 = 2;
          }
        } while (!(bool)(bVar7 >> 1 & 1));
        fn_822315A0(uVar6);
      }
      fn_8223B688(auStack_40,(ulonglong)uStack_50 + 0x28);
      puVar3 = param_2 + 4;
      if (0xf < (uint)param_2[5]) {
        param_2 = (undefined4 *)*param_2;
      }
      iVar4 = fn_8260D428(auStack_40,0,uStack_30,param_2,*puVar3);
      fn_82230300(auStack_40,1,0);
      if (uVar6 == 0) {
        return iVar4 == 0;
      }
      fn_822315A0(uVar6);
      return iVar4 == 0;
    }
  }
  return false;
}

