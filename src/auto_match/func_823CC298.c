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
extern int fn_82535298();
extern int fn_82536288();
extern int fn_8254EDB0();
extern int fn_8254F190();
extern unsigned int lbl_821CC160;


void fn_823CC298(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int aiStack_30 [12];
  
  switch(param_2) {
  case 0:
  case 0x1d:
    piVar3 = param_1 + 2;
    break;
  case 1:
    piVar3 = param_1 + 3;
    break;
  case 2:
  case 0x16:
    piVar3 = param_1 + 4;
    break;
  case 3:
  case 0x1c:
    piVar3 = param_1 + 5;
    break;
  case 4:
    piVar3 = param_1 + 6;
    break;
  case 5:
    piVar3 = param_1 + 7;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 0x1c8) = 0;
      fn_8254F190((double)(float)param_1[0x1a],*param_1);
      goto code_r0x823cc310;
    }
    break;
  case 6:
    piVar3 = param_1 + 8;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 0x1c8) = 0;
      fn_8254F190((double)(float)param_1[0x1a],*param_1);
      goto code_r0x823cc34c;
    }
    break;
  case 7:
    piVar3 = param_1 + 9;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 0x1c8) = 0;
      fn_8254F190((double)(float)param_1[0x1a],*param_1);
      iVar2 = *param_1;
      if (iVar2 != 0) {
        iVar1 = param_1[0x20];
        goto code_r0x823cc60c;
      }
    }
    goto code_r0x823cc618;
  case 8:
    param_1[0x1c] = param_1[0x34];
    *(undefined1 *)(param_1 + 0x1d) = 1;
    return;
  case 9:
    piVar3 = param_1 + 10;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 0x1c8) = 0;
      fn_8254F190((double)(float)param_1[0x1a],*param_1);
      iVar2 = *param_1;
      if (iVar2 != 0) {
        iVar1 = param_1[0x2c];
        goto code_r0x823cc744;
      }
    }
    break;
  case 10:
    piVar3 = param_1 + 0xb;
    break;
  case 0xb:
    iVar2 = *param_1;
    piVar3 = param_1 + 0xc;
    if (iVar2 != 0) {
      iVar1 = param_1[0x30];
      goto code_r0x823cc744;
    }
    break;
  case 0xc:
    iVar2 = *param_1;
    piVar3 = param_1 + 0xd;
    if (iVar2 != 0) {
      iVar1 = param_1[0x31];
      goto code_r0x823cc744;
    }
    break;
  case 0xd:
    iVar2 = *param_1;
    piVar3 = param_1 + 0xe;
    if (iVar2 != 0) {
      iVar1 = param_1[0x32];
      goto code_r0x823cc744;
    }
    break;
  case 0xe:
    iVar2 = *param_1;
    piVar3 = param_1 + 0xf;
    if (iVar2 != 0) {
      iVar1 = param_1[0x33];
      goto code_r0x823cc744;
    }
    break;
  case 0xf:
    piVar3 = param_1 + 0x11;
    goto code_r0x823cc310;
  case 0x10:
    piVar3 = param_1 + 0x19;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 0x1c8) = 0;
      fn_8254F190((double)(float)param_1[0x1a],*param_1);
      iVar2 = *param_1;
      if (iVar2 != 0) {
        iVar1 = param_1[0x22];
        goto code_r0x823cc60c;
      }
    }
    goto code_r0x823cc618;
  case 0x11:
    piVar3 = param_1 + 6;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 0x1c8) = 0;
      fn_8254F190((double)(float)param_1[0x1a],*param_1);
      iVar2 = *param_1;
      if (iVar2 != 0) {
        iVar1 = param_1[0x28];
        goto code_r0x823cc60c;
      }
    }
    goto code_r0x823cc618;
  case 0x12:
    piVar3 = param_1 + 0x12;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 0x1c8) = 0;
      fn_8254F190((double)(float)param_1[0x1a],*param_1);
      iVar2 = *param_1;
      if (iVar2 != 0) {
        iVar1 = param_1[0x26];
        goto code_r0x823cc60c;
      }
    }
    goto code_r0x823cc618;
  case 0x13:
    piVar3 = param_1 + 0x12;
    if (*param_1 != 0) {
      *(undefined1 *)(param_1 + 0x1b) = 0;
      *(undefined4 *)(*param_1 + 0x1c8) = 0;
      fn_8254F190((double)(float)param_1[0x1a],*param_1);
      iVar2 = *param_1;
      if (iVar2 != 0) {
        iVar1 = param_1[0x23];
        goto code_r0x823cc60c;
      }
      goto code_r0x823cc618;
    }
    break;
  case 0x14:
    if (*param_1 == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x1b) = 0;
    *(undefined4 *)(*param_1 + 0x1c8) = 0;
    fn_8254F190((double)(float)param_1[0x1a],*param_1);
    fn_8254EDB0((double)lbl_821CC160,*param_1,param_1[0x1f]);
    return;
  case 0x15:
    piVar3 = param_1 + 4;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 0x1c8) = 0;
      fn_8254F190((double)(float)param_1[0x1a],*param_1);
      iVar2 = *param_1;
      if (iVar2 != 0) {
        iVar1 = param_1[0x29];
        goto code_r0x823cc60c;
      }
    }
    goto code_r0x823cc618;
  case 0x17:
    piVar3 = param_1 + 7;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 0x1c8) = 0;
      fn_8254F190((double)(float)param_1[0x1a],*param_1);
    }
    iVar2 = *param_1;
    param_1[0x1e] = 0;
    if (iVar2 != 0) {
      iVar1 = param_1[0x2d];
code_r0x823cc60c:
      fn_8254EDB0((double)(float)param_1[0x36],(double)(float)param_1[0x37],iVar2,iVar1);
    }
code_r0x823cc618:
    param_1[0x1c] = param_1[0x34];
    *(undefined1 *)(param_1 + 0x1d) = 1;
    break;
  case 0x18:
    piVar3 = param_1 + 0x13;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 0x1c8) = 0;
      fn_8254F190((double)(float)param_1[0x1a],*param_1);
    }
    param_1[0x1e] = 0;
code_r0x823cc310:
    iVar2 = *param_1;
    if (iVar2 != 0) {
      iVar1 = param_1[0x2a];
code_r0x823cc744:
      fn_8254EDB0((double)(float)param_1[0x36],(double)(float)param_1[0x37],iVar2,iVar1);
    }
    break;
  case 0x19:
    piVar3 = param_1 + 0x14;
    *(undefined1 *)(param_1 + 0x1b) = 0;
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 0x1c8) = 0;
      fn_8254F190((double)(float)param_1[0x1a],*param_1);
    }
    param_1[0x1e] = 0;
code_r0x823cc34c:
    iVar2 = *param_1;
    if (iVar2 == 0) break;
    iVar1 = param_1[0x2b];
    goto code_r0x823cc744;
  case 0x1a:
    if (param_1[0x3c] != 0) {
      return;
    }
    iVar2 = 1;
    piVar3 = param_1 + 0x15;
    goto code_r0x823cc6b8;
  case 0x1b:
    if (param_1[0x3c] == 0) {
      return;
    }
    iVar2 = 0;
    piVar3 = param_1 + 0x16;
code_r0x823cc6b8:
    param_1[0x3c] = iVar2;
    break;
  case 0x1e:
    piVar3 = param_1 + 0x17;
    break;
  case 0x1f:
    *(undefined1 *)(param_1 + 0x1d) = 1;
    param_1[0x1e] = 1;
    param_1[0x1c] = (int)lbl_821CC160;
    return;
  case 0x20:
    *(undefined1 *)(param_1 + 0x1b) = 0;
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 0x1c8) = 0;
      fn_8254F190((double)(float)param_1[0x1a],*param_1);
    }
    param_1[0x1e] = 0;
    return;
  case 0x21:
    piVar3 = param_1 + 0x18;
    break;
  case 0x22:
    iVar2 = *param_1;
    piVar3 = param_1 + 4;
    param_1[0x1e] = 0;
    if (iVar2 != 0) {
      iVar1 = param_1[0x2f];
      goto code_r0x823cc744;
    }
    break;
  default:
    goto LAB_823cc798;
  }
  if ((piVar3 != (int *)0x0) && (aiStack_30[0] = *piVar3, aiStack_30[0] != 0)) {
    aiStack_30[0] =
         fn_82535298(aiStack_30,*(undefined4 *)param_1[1],0xffffffff83296bc0,
                           0xffffffff83296bd0);
    fn_82536288(aiStack_30);
  }
LAB_823cc798:
  return;
}

