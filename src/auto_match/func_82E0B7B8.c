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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82E0A830();
extern unsigned int iStack_70;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


undefined8 fn_82E0B7B8(int param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iStack_70;
  uint uStack_6c;
  uint uStack_68;
  
  iVar2 = fn_82CE5410();
  iVar6 = param_1 + 0xc;
  fn_82CEA160(iVar6,*(undefined4 *)(iVar2 + 0x10),param_2,2);
  iStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0x80000000;
  iVar2 = param_4[1];
  iVar3 = fn_82CE5410();
  if ((int)(uStack_68 & 0x3fffffff) < iVar2) {
    fn_82CE6310(*(undefined4 *)(iVar3 + 0xc),&iStack_70,iVar2,8);
  }
  iVar2 = 0;
  if (0 < param_4[1]) {
    iVar3 = 0;
    do {
      puVar7 = (undefined4 *)(iVar3 + *param_4);
      iVar5 = **(int **)(iVar3 + *param_4);
      if ((iVar5 != 0) && (iVar4 = fn_82CEA220(iVar6,iVar5), *(int *)(param_1 + 0x14) < iVar4)) {
        iVar4 = fn_82CE5410();
        fn_82CEA160(iVar6,*(undefined4 *)(iVar4 + 0x10),iVar5,1);
        iVar5 = fn_82CE5410();
        if (uStack_6c == (uStack_68 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar5 + 0xc),&iStack_70,8);
        }
        iVar5 = uStack_6c * 8;
        uStack_6c = uStack_6c + 1;
        *(undefined4 *)(iVar5 + iStack_70) = *puVar7;
        *(undefined4 *)(iVar5 + iStack_70 + 4) = puVar7[1];
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar2 < param_4[1]);
  }
  iVar2 = *param_4;
  iVar3 = param_4[1];
  uVar1 = param_4[2];
  *param_4 = iStack_70;
  param_4[1] = uStack_6c;
  param_4[2] = uStack_68;
  iStack_70 = iVar2;
  uStack_6c = iVar3;
  uStack_68 = uVar1;
  fn_82E0A830(param_1,param_2,param_3,1);
  iVar2 = fn_82CE5410();
  uStack_6c = 0;
  if ((uStack_68 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar2 + 0xc) + 0x10))
              (*(int **)(iVar2 + 0xc),iStack_70,uStack_68 & 0x3fffffff,8);
  }
  return 0;
}

