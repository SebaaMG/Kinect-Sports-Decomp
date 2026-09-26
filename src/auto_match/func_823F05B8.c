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
extern unsigned int *auStack_30;
extern unsigned int *auStack_48;
extern unsigned int *auStack_68;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82359C18();
extern int fn_82392C68();
extern int fn_823F84C8();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_70;


undefined4 * fn_823F05B8(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  uint uStack_50;
  uint uStack_4c;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [24];
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(char *)((int)puVar4[1] + 0x49) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if (((uint)puVar1[4] < *param_2) ||
         (((uint)puVar1[4] <= *param_2 && ((int)puVar1[5] < (int)param_2[1])))) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x49) == '\0');
  }
  if (puVar4 != *(undefined4 **)(param_1 + 4)) {
    if ((*param_2 < (uint)puVar4[4]) ||
       ((*param_2 <= (uint)puVar4[4] && ((int)param_2[1] < (int)puVar4[5])))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) goto code_r0x823f06ec;
  }
  uStack_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_70 = 0;
  uStack_58 = 0;
  fn_82392C68(auStack_48,auStack_80);
  fn_82392C68(auStack_30,auStack_68);
  puVar4 = (undefined4 *)fn_823F84C8(auStack_90,param_1,puVar4,&uStack_50);
  puVar4 = (undefined4 *)*puVar4;
  fn_82359C18(auStack_30);
  fn_82359C18(auStack_48);
  fn_82359C18(auStack_68);
  fn_82359C18(auStack_80);
code_r0x823f06ec:
  return puVar4 + 6;
}

