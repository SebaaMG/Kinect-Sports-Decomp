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
extern int fn_829301D0();
extern int fn_82936290();
extern int fn_82937420();
extern unsigned int iStack_160;


undefined8 fn_82937598(int param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  undefined8 uVar4;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int iStack_160;
  int aiStack_15c [3];
  char acStack_150 [128];
  char acStack_d0 [208];
  
  fn_82937420(param_3,acStack_150,0x80,acStack_d0,0x80,aiStack_15c,&iStack_160);
  if (aiStack_15c[0] == 2) {
    fn_82936290(acStack_150,0x80,*param_4);
  }
  if ((acStack_d0[0] != '\0') && (uVar6 = 0, param_4[0xe] != 0)) {
    puVar5 = param_4 + 0xf;
    do {
      puVar3 = (undefined4 *)*puVar5;
      pcVar8 = acStack_150;
      pcVar7 = (char *)*puVar3;
      do {
        cVar1 = *pcVar8;
        cVar2 = *pcVar7;
        if (cVar1 == '\0') break;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 == cVar2);
      if (((cVar1 == cVar2) && (puVar3[0xd] == iStack_160)) && (puVar3[1] == *(int *)(param_2 + 4)))
      {
        uVar4 = fn_82937598(param_1,param_2,acStack_d0,param_4[uVar6 + 0xf]);
        return uVar4;
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 < (uint)param_4[0xe]);
  }
  if (acStack_d0[0] == '\0') {
    puVar5 = (undefined4 *)fn_829301D0(*(undefined4 *)(param_1 + 4),0x43c,4);
    pcVar7 = acStack_150;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar7 - (int)acStack_150;
    uVar4 = fn_829301D0(*(undefined4 *)(param_1 + 4),uVar6,0x10);
    if (uVar6 < 0x80000000) {
      fn_82936290(uVar4,uVar6,acStack_150);
    }
    *puVar5 = (int)uVar4;
    puVar5[0xd] = iStack_160;
    puVar5[0xc] = aiStack_15c[0];
    puVar5[0xe] = 0;
    puVar5[1] = *(undefined4 *)(param_2 + 4);
    puVar5[10] = *(undefined4 *)(param_2 + 0x28);
    puVar5[6] = *(undefined4 *)(param_2 + 0x18);
    puVar5[7] = *(undefined4 *)(param_2 + 0x1c);
    puVar5[0xb] = *(undefined4 *)(param_2 + 0x2c);
    puVar5[8] = 1;
    puVar5[3] = *(undefined4 *)(param_2 + 0xc);
    puVar5[2] = *(undefined4 *)(param_2 + 8);
    puVar5[9] = 0;
    puVar5[4] = *(undefined4 *)(param_2 + 0x10);
    puVar5[5] = *(undefined4 *)(param_2 + 0x14);
  }
  else {
    puVar5 = (undefined4 *)fn_829301D0(*(undefined4 *)(param_1 + 4),0x43c,4);
    pcVar7 = acStack_150;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar7 - (int)acStack_150;
    uVar4 = fn_829301D0(*(undefined4 *)(param_1 + 4),uVar6,0x10);
    if (uVar6 < 0x80000000) {
      fn_82936290(uVar4,uVar6,acStack_150);
    }
    *puVar5 = (int)uVar4;
    puVar5[0xd] = iStack_160;
    puVar5[0xc] = aiStack_15c[0];
    puVar5[0xe] = 0;
    puVar5[10] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[0xb] = 0;
    puVar5[8] = 1;
    puVar5[3] = 0xffffffff;
    puVar5[2] = 0xffffffff;
    puVar5[1] = *(undefined4 *)(param_2 + 4);
    puVar5[4] = 0xffffffff;
    puVar5[5] = 0xffffffff;
    puVar5[9] = 0;
    uVar4 = fn_82937598(param_1,param_2,acStack_d0,puVar5);
    if ((int)uVar4 == -1) {
      return uVar4;
    }
  }
  param_4[param_4[0xe] + 0xf] = puVar5;
  param_4[0xe] = param_4[0xe] + 1;
  return 1;
}

