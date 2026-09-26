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
extern int fn_829AB0E0();
extern int fn_829AB0F0();
extern int fn_829AB250();
extern int fn_829AB2C0();
extern int fn_829B0F58();
extern int fn_829B4FF8();
extern int fn_829B5070();
extern int fn_829B5088();
extern int fn_829B50F8();
extern int fn_829B8A20();
extern int fn_82F6C150();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;


int fn_829AE308(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  
  pcStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  iVar1 = fn_829B4FF8(1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = fn_82F6C150();
  if (iVar2 != 0) {
    fn_829B50F8(iVar1,*(undefined4 *)(iVar1 + 0x59c));
    fn_829B5070(iVar1);
    return 0;
  }
  fn_829AB0E0(iVar1,uStack0000001c,uStack00000024,uStack0000002c);
  if ((pcStack00000014 == (char *)0x0) || (*pcStack00000014 != '1')) {
    fn_829AB0F0(iVar1,0xffffffff82052320);
  }
  *(undefined4 *)(iVar1 + 0x5a0) = 0x2000;
  uVar3 = fn_829B5088(iVar1,0x2000);
  *(undefined4 *)(iVar1 + 0x59c) = uVar3;
  *(code **)(iVar1 + 0x584) = fn_829AB250;
  *(code **)(iVar1 + 0x588) = fn_829AB2C0;
  *(int *)(iVar1 + 0x58c) = iVar1;
  iVar2 = fn_829B8A20(iVar1 + 0x564,0xffffffff8205247c,0x38);
  if (iVar2 == -6) {
    uVar4 = 0xffffffff82052440;
  }
  else if ((iVar2 == -4) || (iVar2 == -2)) {
    uVar4 = 0xffffffff82052454;
  }
  else {
    if (iVar2 == 0) goto code_r0x829ae434;
    uVar4 = 0xffffffff82052468;
  }
  fn_829AB0F0(iVar1,uVar4);
code_r0x829ae434:
  *(undefined4 *)(iVar1 + 0x570) = *(undefined4 *)(iVar1 + 0x59c);
  *(undefined4 *)(iVar1 + 0x574) = *(undefined4 *)(iVar1 + 0x5a0);
  fn_829B0F58(iVar1,0,0);
  return iVar1;
}

