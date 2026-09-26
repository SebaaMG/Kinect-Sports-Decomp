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
extern int fn_828F6FA8();


void fn_82975A18(int param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  piVar2 = (int *)(param_2 + 4);
  if (*(int *)(param_2 + 0x38) != -1) {
    param_2 = *(int *)(*(int *)(param_2 + 0x38) * 4 + *(int *)(param_1 + 0x14));
  }
  pcVar4 = (char *)**(undefined4 **)(*piVar2 * 4 + *(int *)(param_1 + 0x10));
  if ((*pcVar4 == '\0') || (pcVar4[1] != '\0')) {
    uVar3 = 0xffffffff820387ec;
  }
  else {
    uVar3 = 0xffffffff821c4da8;
  }
  fn_828F6FA8(param_3,param_4,uVar3);
  pcVar4 = param_3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + (-1 - (int)param_3);
  if (*(int *)(param_2 + 0xc) == -1) {
    fn_828F6FA8(param_3 + (int)pcVar4,param_4 - (int)pcVar4,0xffffffff821ce31c);
  }
  else {
    fn_828F6FA8(param_3 + (int)pcVar4,param_4 - (int)pcVar4,0xffffffff821c7f34);
  }
  param_3[param_4 + -1] = '\0';
  return;
}

