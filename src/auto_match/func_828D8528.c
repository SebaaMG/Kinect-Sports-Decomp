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
extern int fn_828D5420();
extern int fn_828D8190();
extern unsigned int lbl_82026D70;
extern unsigned int uStack_60;


undefined4 * fn_828D8528(int *param_1,int *param_2,undefined4 *param_3)

{
  char cVar2;
  undefined4 uVar1;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 uStack_60;
  
  if (param_1 != param_2) {
    puVar4 = param_3 + 4;
    piVar5 = param_1 + 4;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = &lbl_82026D70;
        puVar4[-3] = piVar5[-3];
        puVar4[-2] = piVar5[-2];
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        cVar2 = fn_828D5420(puVar4 + -1,(*piVar5 - piVar5[-1]) / 0x1c);
        if (cVar2 != '\0') {
          uVar1 = fn_828D8190(piVar5[-1],*piVar5,puVar4[-1],puVar4 + 2,uStack_60);
          *puVar4 = uVar1;
        }
      }
      param_3 = param_3 + 7;
      piVar3 = piVar5 + 3;
      puVar4 = puVar4 + 7;
      piVar5 = piVar5 + 7;
    } while (piVar3 != param_2);
  }
  return param_3;
}

