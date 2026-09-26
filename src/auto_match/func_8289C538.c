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
extern int fn_8240D928();
extern int fn_8265C9E0();
extern int fn_82897BA8();
extern int fn_82897BE0();
extern int fn_8289A818();
extern int fn_8289C1A0();
extern unsigned int lbl_820239B8;


void fn_8289C538(int param_1,char param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar4;
  undefined8 uVar3;
  char cVar6;
  undefined4 *puVar5;
  
  fn_8289C1A0();
  if (param_2 == '\0') {
    puVar5 = (undefined4 *)fn_8265C9E0(0xc);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &lbl_820239B8;
    }
    *(undefined4 **)(param_1 + 0x20) = puVar5;
    puVar5[1] = (int)param_3;
    *(undefined1 *)(puVar5 + 2) = 0;
    fn_82897BE0(*(undefined4 *)(param_1 + 0x18));
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  else {
    uVar2 = fn_8265C9E0(0x38);
    if ((uVar2 & 0xffffffff) == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)fn_8289A818(uVar2,*(undefined4 *)(param_1 + 0x18),0);
    }
    *(int **)(param_1 + 0x20) = piVar4;
    iVar1 = *piVar4;
    uVar3 = fn_8240D928(param_3);
    (**(code **)(iVar1 + 0x28))(piVar4,uVar3,param_1 + 4);
    cVar6 = fn_82897BA8(*(undefined4 *)(param_1 + 0x18));
    if (cVar6 != '\0') {
      piVar4[3] = 3;
      piVar4[4] = 3;
      piVar4[5] = 3;
      piVar4[6] = 3;
    }
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  return;
}

