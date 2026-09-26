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
extern int fn_82E3BCC8();
extern int fn_82E3C590();
extern int fn_82E5C778();
extern int fn_82E5C7D8();
extern int fn_82E62670();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_820F8EB8;
extern unsigned int lbl_820F8EC8;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;


longlong fn_82E3D570(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  undefined2 auStack_70 [2];
  int *piStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (param_2 == (int *)0x0) {
    lVar4 = -0x7ff8ffa9;
  }
  else {
    piStack_6c = (int *)0x0;
    fn_82E3BCC8(param_1 + 0x78,0);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    uStack_68 = 0;
    lVar4 = (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82154b18,&uStack_68);
    piVar6 = piStack_6c;
    if ((-1 < lVar4) && (uVar9 = 0, uStack_68 != 0)) {
      do {
        lVar4 = (**(code **)(*param_2 + 0x10))(param_2,0xffffffff82154b18,uVar9,&piStack_6c);
        piVar3 = piStack_6c;
        piVar6 = piStack_6c;
        if (lVar4 < 0) break;
        uStack_64 = 0;
        lVar4 = fn_82E62670(piStack_6c,&uStack_64);
        piVar6 = piStack_6c;
        if (lVar4 < 0) break;
        uStack_60 = lbl_8202E618;
        uStack_5c = lbl_8202E61C;
        uStack_58 = lbl_8202E620;
        uStack_54 = lbl_8202E624;
        lVar4 = fn_82E5C778(piVar3,&uStack_60);
        piVar6 = piStack_6c;
        if (lVar4 < 0) break;
        auStack_70[0] = 0;
        lVar4 = fn_82E5C7D8(piVar3,auStack_70);
        piVar6 = piStack_6c;
        if (lVar4 < 0) break;
        if (piStack_6c != (int *)0x0) {
          (**(code **)(*piStack_6c + 8))();
          piStack_6c = (int *)0x0;
        }
        piVar6 = (int *)0x0;
        if ((uStack_64 & 0x80000000) == 0) {
          pbVar7 = (byte *)&uStack_60;
          pbVar8 = &lbl_820F8EB8;
          do {
            bVar1 = *pbVar8;
            bVar2 = *pbVar7;
            if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
            pbVar8 = pbVar8 + 1;
            pbVar7 = pbVar7 + 1;
          } while (pbVar8 != &lbl_820F8EC8);
          if (((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) &&
             (iVar5 = fn_82E3C590(param_1 + 0x78,auStack_70[0],0), piVar6 = piStack_6c, iVar5 == 0
             )) {
            lVar4 = -0x7ff8fff2;
            break;
          }
        }
        uVar9 = uVar9 + 1;
      } while ((uVar9 & 0xffffffff) < (ulonglong)uStack_68);
    }
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))();
    }
  }
  return lVar4;
}

