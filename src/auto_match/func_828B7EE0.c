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
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82231540();
extern int fn_8265CA20();
extern int fn_828B6DD0();
extern int fn_828B8F70();
extern int fn_828B9020();
extern unsigned int uStack_4c;
extern unsigned int uStack_70;


undefined8 fn_828B7EE0(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 uStack_70;
  undefined4 auStack_60 [5];
  uint uStack_4c;
  
  if ((param_1[0xb] - param_1[10] & 0xfffffffcU) == 0) {
    uVar1 = 1;
  }
  else {
    if (param_1[8] == 1) {
      (**(code **)(*param_1 + 0x1c))(param_1,param_2);
    }
    fn_82230110(auStack_60,0xffffffff82196582);
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1,auStack_60);
    puVar3 = (undefined4 *)param_1[1];
    if (puVar3 != (undefined4 *)param_1[2]) {
      do {
        fn_828B9020(*puVar3);
        cVar2 = fn_828B8F70(*puVar3,param_2,uVar1,auStack_60);
        if (cVar2 == '\0') {
          puVar3 = puVar3 + 2;
        }
        else {
          fn_828B6DD0(puVar3 + 2,param_1[2],puVar3,uStack_70);
          fn_82231540((ulonglong)(uint)param_1[2] - 8,(ulonglong)(uint)param_1[2],param_1 + 4,
                            uStack_70);
          param_1[2] = param_1[2] + -8;
        }
      } while (puVar3 != (undefined4 *)param_1[2]);
    }
    if (0xf < uStack_4c) {
      fn_8265CA20(auStack_60[0]);
    }
    uVar1 = 0;
  }
  return uVar1;
}

