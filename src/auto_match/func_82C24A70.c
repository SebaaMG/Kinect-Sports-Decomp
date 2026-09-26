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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82C1E828();
extern int fn_82C1EAB8();
extern int fn_82C1EC50();
extern int fn_82C1EE20();
extern unsigned int lbl_820ED018;
extern unsigned int lbl_820ED028;
extern unsigned int uStack_34;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


undefined8 fn_82C24A70(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  char cStack_50;
  char acStack_4f [3];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 auStack_40 [2];
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  byte abStack_30 [24];
  
  piVar3 = *(int **)(param_1 + 0x1c);
  uStack_44 = 0;
  uStack_48 = 0;
  auStack_40[0] = 0;
  iVar4 = *piVar3;
  cStack_50 = '\0';
  acStack_4f[0] = '\0';
  uStack_4c = 0x1e;
  uVar5 = (**(code **)(iVar4 + 0xc))(iVar4,0x1e);
  if (((((-1 < (int)uVar5) &&
        (uVar5 = fn_82C1EE20(param_1,abStack_30,&uStack_44,&uStack_48,&uStack_4c), -1 < (int)uVar5
        )) && (uVar5 = fn_82C1EC50(param_1,auStack_38,&uStack_44,&uStack_48,&uStack_4c),
              -1 < (int)uVar5)) &&
      ((uVar5 = fn_82C1EAB8(param_1,auStack_40,&uStack_44,&uStack_48,&uStack_4c), -1 < (int)uVar5
       && (uVar5 = fn_82C1E828(param_1,&cStack_50,&uStack_44,&uStack_48,&uStack_4c),
          -1 < (int)uVar5)))) &&
     (uVar5 = fn_82C1E828(param_1,acStack_4f,&uStack_44,&uStack_48,&uStack_4c), -1 < (int)uVar5))
  {
    pbVar6 = abStack_30;
    pbVar7 = (byte *)&lbl_820ED018;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar6;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar7 != &lbl_820ED028);
    if ((((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) && (cStack_50 == '\x01')) &&
       (acStack_4f[0] == '\x02')) {
      *(undefined4 *)(piVar3[1] + 4) = uStack_34;
    }
    else {
      uVar5 = 0xffffffff8050000c;
    }
  }
  return uVar5;
}

