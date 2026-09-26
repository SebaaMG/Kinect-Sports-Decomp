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
extern float fRam832976cc;
extern int fn_82359558();
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_821CC160;


void fn_823CA708(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x290);
  if (param_2 == iVar2) {
    return;
  }
  if ((iVar2 == 5) || (iVar2 == 0x11)) {
    *(undefined4 *)(param_1 + 0x368) = 1;
  }
  *(int *)(param_1 + 0x290) = param_2;
  *(undefined4 *)(param_1 + 0x364) = 0;
  fVar1 = lbl_821CC160;
  switch(param_2) {
  case 0:
  case 5:
  case 0x10:
  case 0x11:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1a:
    goto code_r0x823ca7a4;
  case 2:
    iVar2 = *(int *)(param_1 + 0x260);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x260) = iVar2;
                    /* WARNING: Subroutine does not return */
    fn_82359558(*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x10));
  case 3:
  case 9:
    if ((*(int *)(param_1 + 0x2b4) != 0) && (iVar2 = *(int *)(param_1 + 0x360), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x2b4) + 0xc);
      *(undefined1 *)(iVar2 + 0x18) = 1;
      *(undefined4 *)(iVar2 + 0x20) = lbl_82191FC8;
    }
    goto code_r0x823ca7a4;
  case 4:
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_1 + 0x2a4);
    break;
  case 0xd:
    *(float *)(param_1 + 0x264) = lbl_821CC160;
    break;
  case 0x14:
    *(undefined4 *)(param_1 + 0x2ac) = 0;
    break;
  case 0x19:
    iVar2 = *(int *)(param_1 + 0x260);
    if (iVar2 < 2) {
      iVar2 = 2;
    }
    goto code_r0x823ca79c;
  case 0x1d:
    if (fRam832976cc == lbl_821CC160) break;
    iVar2 = (int)fRam832976cc;
    if ((int)fRam832976cc <= *(int *)(param_1 + 0x260)) {
      iVar2 = *(int *)(param_1 + 0x260);
    }
code_r0x823ca79c:
    *(int *)(param_1 + 0x260) = iVar2;
  }
  *(float *)(param_1 + 0x29c) = fVar1;
  return;
code_r0x823ca7a4:
  iVar2 = *(int *)(param_1 + 0x260);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  goto code_r0x823ca79c;
}

