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
extern int fn_82CFC050();
extern int fn_82D5B180();
extern int fn_82DF6BF0();
extern int fn_82DF71E8();


undefined8 fn_82DF7968(int param_1,longlong param_2,undefined8 param_3,int *param_4,char *param_5)

{
  bool bVar1;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar2;
  char *pcVar5;
  
  if (*param_5 == '\x02') {
    pcVar5 = param_5 + 0x20;
  }
  else {
    if (*param_5 != '\x04') {
      return 1;
    }
    pcVar5 = param_5 + 0x30;
  }
  iVar3 = fn_82DF6BF0(*(undefined4 *)((uint)(byte)param_5[1] * 0x50 + *param_4 + 0x16dc));
  if ((iVar3 != (int)param_2) || (8 < (param_2 - 1U & 0xffffffff))) {
    return 1;
  }
  bVar1 = (int)(param_2 - 1U) != 0;
  if ((param_2 != 2 || !bVar1) && ((param_2 != 3 || !bVar1 && (param_2 != 4 || !bVar1)))) {
    if (param_2 == 5 && bVar1) {
      fn_82CFC050(param_5 + 0x18,param_1 + 0x8c,0x68);
      param_5[2] = *(char *)(param_1 + 0x76);
      param_5[3] = *(char *)(param_1 + 0x77);
      if ((pcVar5[0xb] & 0x20U) != 0) {
        return 0;
      }
      puVar4 = (undefined4 *)fn_82D5B180(param_5,pcVar5);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0x80000000;
      }
      uVar2 = fn_82DF71E8(param_3,param_4,puVar4);
      return uVar2;
    }
    if ((((param_2 == 6 && bVar1) || (param_2 == 7 && bVar1)) || (param_2 == 8 && bVar1)) || (bVar1)
       ) {
      fn_82CFC050(param_5 + 0x18,param_1 + 0x8c,0x68);
      if (pcVar5 != (char *)0x0) {
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
        pcVar5[4] = '\0';
        pcVar5[5] = '\0';
        pcVar5[6] = '\0';
        pcVar5[7] = '\0';
        pcVar5[8] = -0x80;
        pcVar5[9] = '\0';
        pcVar5[10] = '\0';
        pcVar5[0xb] = '\0';
      }
      uVar2 = fn_82DF71E8(param_3,param_4,pcVar5);
      return uVar2;
    }
  }
  fn_82CFC050(param_5 + 0x18,param_1 + 0x8c,0x68);
  param_5[2] = *(char *)(param_1 + 0x76);
  param_5[3] = *(char *)(param_1 + 0x77);
  return 0;
}

