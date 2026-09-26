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
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8223C610();
extern int fn_823B8510();
extern unsigned int iStack_34;
extern unsigned int iStack_44;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


void fn_823B7DC0(int *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  
  uVar2 = fn_8223C610(*param_3,*(undefined4 *)(*(int *)(*param_1 + 0x308) + 0xc),0,0);
  puStack_50 = (undefined4 *)param_1[0x22];
  puVar4 = (undefined4 *)((undefined4 *)param_1[0x22])[1];
  while( true ) {
    if (*(char *)((int)puVar4 + 0x19) != '\0') break;
    if ((uint)puVar4[3] < uVar2) {
      puVar4 = (undefined4 *)puVar4[2];
    }
    else {
      puStack_50 = puVar4;
      puVar4 = (undefined4 *)*puVar4;
    }
  }
  if ((puStack_50 == (undefined4 *)param_1[0x22]) || (uVar2 < (uint)puStack_50[3])) {
    ppuVar5 = &puStack_4c;
    puStack_4c = (undefined4 *)param_1[0x22];
  }
  else {
    ppuVar5 = &puStack_50;
  }
  puVar4 = *ppuVar5;
  if (puVar4 != (undefined4 *)param_1[0x22]) {
    (**(code **)(*(int *)puVar4[4] + 4))(&uStack_48);
    (**(code **)(*(int *)puVar4[4] + 0xc))((int *)puVar4[4],*param_3,uStack_48);
    iVar1 = iStack_44;
    uStack_38 = 0;
    iStack_34 = 0;
    uStack_40 = *param_2;
    if ((iStack_44 != 0) && (cVar3 = fn_8223AAC0(), cVar3 != '\0')) {
      iStack_34 = iVar1;
      uStack_38 = uStack_48;
    }
    fn_823B8510(param_1 + 0x25,&uStack_40);
    if (iStack_34 != 0) {
      fn_822315A0();
    }
    if (iStack_44 != 0) {
      fn_822315A0();
    }
  }
  return;
}

