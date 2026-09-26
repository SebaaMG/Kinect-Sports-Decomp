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
extern unsigned int *auStack_70;
extern unsigned int *auStack_7c;
extern int fn_82F377E8();
extern int fn_82F39000();
extern int fn_82F40450();
extern unsigned int lbl_820ED0A8;
extern unsigned int lbl_820ED0B8;
extern unsigned int uStack_78;


undefined8 fn_82F392A8(int *param_1,ulonglong param_2,ulonglong param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piStack_80;
  undefined1 auStack_7c [4];
  ulonglong uStack_78;
  ulonglong auStack_70 [2];
  byte abStack_60 [96];
  
  if (((param_4 == (undefined4 *)0x0) || ((param_2 & 0xffffffff) == 0)) ||
     ((param_3 & 0xffffffff) == 0)) {
    uVar5 = 0xffffffff80070057;
  }
  else {
    uVar5 = fn_82F39000();
    if ((-1 < (int)uVar5) &&
       (uVar5 = (**(code **)(*param_1 + 0x2c))(param_1,auStack_70), -1 < (int)uVar5)) {
      if ((param_3 & 0xffffffff) < auStack_70[0]) {
        uVar5 = 0xffffffffc00d36b1;
      }
      else {
        uVar3 = param_1[0x1c];
        lVar9 = 0;
        uVar8 = 0;
        if (uVar3 != 0) {
          do {
            fn_82F377E8(param_1 + 2,uVar8,&piStack_80);
            piVar4 = (int *)*piStack_80;
            if (piVar4 == (int *)0x0) {
              uVar5 = 0xffffffff8000ffff;
              break;
            }
            uVar5 = (**(code **)(*piVar4 + 0xc))(piVar4,abStack_60);
            if ((int)uVar5 < 0) break;
            uStack_78 = 0;
            uVar5 = (**(code **)(*piVar4 + 0x14))(piVar4,0,&uStack_78);
            if ((int)uVar5 < 0) break;
            if (0xffffffff < uStack_78) {
              return 0xffffffffc00d3a9a;
            }
            uVar5 = (**(code **)(*piVar4 + 0x1c))(piVar4,param_2,param_3 - lVar9,auStack_7c);
            if ((int)uVar5 < 0) break;
            pbVar6 = abStack_60;
            pbVar7 = &lbl_820ED0A8;
            do {
              bVar1 = *pbVar7;
              bVar2 = *pbVar6;
              if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
              pbVar7 = pbVar7 + 1;
              pbVar6 = pbVar6 + 1;
            } while (pbVar7 != &lbl_820ED0B8);
            if (((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) &&
               (uVar5 = fn_82F40450(piVar4,0), (int)uVar5 < 0)) break;
            uVar8 = uVar8 + 1;
            lVar9 = (uStack_78 & 0xffffffff) + lVar9;
            param_2 = (uStack_78 & 0xffffffff) + param_2;
          } while ((uVar8 & 0xffffffff) < (ulonglong)uVar3);
        }
        *param_4 = (int)lVar9;
      }
    }
  }
  return uVar5;
}

