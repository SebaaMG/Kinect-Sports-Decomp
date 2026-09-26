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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_822315A0();
extern int fn_8223C478();
extern int fn_823B4800();
extern int fn_823B8800();
extern int fn_8288B760();
extern int fn_828B00A0();
extern int fn_828E9DB8();
extern unsigned int iStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


undefined8 fn_823B65F8(uint *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar7;
  uint uVar5;
  int *piVar6;
  longlong lVar4;
  undefined4 *puVar8;
  undefined4 **ppuVar9;
  undefined8 uVar10;
  undefined4 *apuStack_50 [2];
  undefined8 uStack_48;
  undefined4 uStack_40;
  int iStack_3c;
  
  uVar10 = 0;
  if (param_1[3] != 0) {
    cVar7 = fn_8288B760((ulonglong)param_1[3] - 0x68);
    if ((cVar7 != '\0') && (param_1[4] != 0)) {
      uVar1 = *(uint *)(param_2 + 4);
      apuStack_50[0] = (undefined4 *)param_1[0x22];
      puVar8 = (undefined4 *)((undefined4 *)param_1[0x22])[1];
      while (*(char *)((int)puVar8 + 0x19) == '\0') {
        if ((uint)puVar8[3] < uVar1) {
          puVar8 = (undefined4 *)puVar8[2];
        }
        else {
          apuStack_50[0] = puVar8;
          puVar8 = (undefined4 *)*puVar8;
        }
      }
      if ((apuStack_50[0] == (undefined4 *)param_1[0x22]) || (uVar1 < (uint)apuStack_50[0][3])) {
        uStack_48 = CONCAT44((undefined4 *)param_1[0x22],(((U64)(uStack_48) >> 32) & 0xFFFFFFFF));
        ppuVar9 = (undefined4 **)&uStack_48;
      }
      else {
        ppuVar9 = apuStack_50;
      }
      puVar8 = *ppuVar9;
      if (puVar8 != (undefined4 *)param_1[0x22]) {
        uVar5 = (**(code **)(**(int **)(*param_1 + 0x308) + 8))();
        if (uVar1 <= uVar5) {
          uVar2 = *(undefined4 *)(*(int *)(*param_1 + 0x308) + 0xc);
          fn_823B4800(&uStack_40);
          uVar3 = uStack_40;
          fn_8223C478(uStack_40,uVar2,0);
          fn_828E9DB8(uVar3,uVar1,uVar2);
          piVar6 = (int *)puVar8[4];
          (**(code **)(*piVar6 + 8))(piVar6,uStack_40,param_2);
          uStack_48 = fn_828B00A0((ulonglong)*param_1 + 0x278);
          piVar6 = (int *)(param_1[3] - 0x68);
          if (param_1[3] == 0) {
            piVar6 = (int *)0x0;
          }
          lVar4 = (**(code **)(*piVar6 + 0x44))();
          fn_823B8800(lVar4 + 0x30,&uStack_48,&uStack_40);
          uVar10 = 1;
          if (iStack_3c != 0) {
            fn_822315A0();
          }
        }
      }
    }
  }
  return uVar10;
}

